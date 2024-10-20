/*
*********************************************************************************************************
*                                                 uC/OS-III
*                                          The Real-Time Kernel
*                                               PORT Windows
*
*
*            		          					Guy BOIS
*                                  Polytechnique Montreal, Qc, CANADA
*                                                  02/2021
*
*
*********************************************************************************************************
*/


#include "routeur.h"

#include  <cpu.h>
#include  <lib_mem.h>

#include <os.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>

#include <app_cfg.h>
#include <cpu.h>
#include <ucos_bsp.h>
#include <ucos_int.h>
#include <xparameters.h>
#include <KAL/kal.h>

#include <xil_printf.h>

#include  <stdio.h>
#include  <ucos_bsp.h>

#include <Source/os.h>
#include <os_cfg_app.h>

#include <xgpio.h>
#include <xintc.h>
#include <xil_exception.h>


#define LLONG_MAX  9223372036854775807
CPU_TS_TMR_FREQ  freq_hz;

CPU_TS64  max_delay_video = 0L;
CPU_TS64  max_delay_audio = 0L;
CPU_TS64  max_delay_autre = 0L;

float  max_delay_video_float;
float  max_delay_audio_float;
float  max_delay_autre_float;

// À utiliser pour suivre le remplissage et le vidage des fifos
// Mettre en commentaire et utiliser la fonction vide suivante si vous ne voulez pas de trace
#if FULL_TRACE == 1
#define safeprintf(fmt, ...)															\
{																						\
	OSMutexPend(&mutPrint, 0, OS_OPT_PEND_BLOCKING, &ts, &perr);						\
	xil_printf(fmt, ##__VA_ARGS__);														\
	OSMutexPost(&mutPrint, OS_OPT_POST_NONE, &perr);									\
}
#else
#define safeprintf(fmt, ...)															\
{																						\
}
#endif

/*
*********************************************************************************************************
*                                                  MAIN
*********************************************************************************************************
*/

int main (void)
{

 	OS_ERR  err;

    UCOS_LowLevelInit();

    CPU_Init();
    Mem_Init();
    OSInit(&err);

    create_application();

    OSStart(&err);
    return 0;                                         // Start multitasking
}

void create_application() {
	int error;

	error = create_events();
	if (error != 0)
		xil_printf("Error %d while creating events\n", error);

	error = create_tasks();
	if (error != 0)
		xil_printf("Error %d while creating tasks\n", error);

}

int create_tasks() {

	int i;
	OS_ERR err;

    OSTaskCreate(&StartupTaskTCB,"StartUp Task", StartupTask, (void *) 0, UCOS_START_TASK_PRIO,
                 &StartupTaskStk[0u], TASK_STK_SIZE / 2, TASK_STK_SIZE, 1, 0, (void*)0, (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);

    return 0;
}

int create_events() {
	OS_ERR err;
	int i;

	// Creation des semaphores
	OSSemCreate(&Sem, "Sem", 0, &err);
	OSSemCreate(&Sem_MemBlock, "Sem_BlockMem", 10000, &err);

	// Creation des mutex
	OSMutexCreate(&mutPrint, "mutPrint", &err);
	OSMutexCreate(&mutAlloc, "mutAlloc", &err);
	OSMutexCreate(&mutTaskComputing, "mutTaskComputing", &err);
	OSSemCreate(&SemTaskComputing, "SemTaskComputing", 1, &err);

	// Creation des files externes - va servir à la manipulation 2
	OSQCreate(&source_errQ, "source_errQ", 1024, &err);
	OSQCreate(&crc_errQ, "crc_errQ", 1024, &err);

	OSFlagCreate(&RouterStatus, "Router Status", (OS_FLAGS)0, &err);

	OSMemCreate(&BLockMem, "BLockMem", &Tab_Block[0][0], 10000, sizeof(Packet) * sizeof(CPU_INT32U), &err);

	return 0;
}


void Update_TS(Packet* packet) {

	CPU_TS64 delay;

	delay = CPU_TS_Get64() - packet->timestamp;  // Valeur courante - valeur initiale

	if (delay < 0) {xil_printf("Attention overflow\n");}

	else {

		switch (packet->type) {
			case PACKET_VIDEO:
				if (delay > max_delay_video) {
					max_delay_video = delay;
				}
				break;

			case PACKET_AUDIO:
				if (delay > max_delay_audio) {
					max_delay_audio = delay;
				}
				break;

			case PACKET_AUTRE:
				if (delay > max_delay_autre) {
					max_delay_autre = delay;
				}
				break;

			default:
				break;
			}

	}
}


/*
*********************************************************************************************************
*                                               STARTUP TASK
*********************************************************************************************************
*/


void gpio_isr0(void *p_int_arg, CPU_INT32U source_cpu) {
	CPU_TS ts;
	OS_ERR err;
	OS_FLAGS flags;

	int button_data = 0;
	button_data = DiscreteRead();

	DiscreteWrite(button_data);

	xil_printf("---------------gpio_isr0---------------\n");

	if (button_data == BP0) {
		ConfigureSystem(NORMAL_MODE);
		OSFlagPost(&RouterStatus, TASKS_ROUTER, OS_OPT_POST_FLAG_SET, &err);
	} else if (button_data == BP1) {
		ConfigureSystem(SUSPENDED_MODE);
		OSFlagPost(&RouterStatus, TASKS_ROUTER, OS_OPT_POST_FLAG_CLR, &err);
	} else if (button_data == BP2) {
		OSFlagPost(&RouterStatus, TASK_SHUTDOWN, OS_OPT_POST_FLAG_SET, &err);
	}

	XGPIO_IR_MASK(0);
}

void fit_timer_isr0(void *p_int_arg, CPU_INT32U source_cpu) {
    OS_ERR perr;
    CPU_TS ts;
    OS_FLAGS flags;
    xil_printf("------------------ FIT TIMER 0 -------------------\n");

    if (!isSystemPaused()) {
        OSFlagPost(&RouterStatus, TASK_STOP_RDY, OS_OPT_POST_FLAG_SET, &perr);
    }
}

void gpio_isr1(void *p_int_arg, CPU_INT32U source_cpu) {
    CPU_TS ts;
    OS_ERR err;
    int switch_data = 0;

    switch_data = ReadSwitch();
    DiscreteWrite(switch_data);

    if (isSystemInNormalMode()) {
        Prev_Status_TaskComputing = Status_TaskComputing;
        
        if (switch_data == SWITCH0) {
            Status_TaskComputing = CS_Mutex;
        } else if (switch_data == SWITCH1) {
            Status_TaskComputing = CS_Semaphore;
        } else if (switch_data == No_SWITCH || (switch_data == (SWITCH1 | SWITCH2))) {
            Status_TaskComputing = No_CS;
        }
        
        OSFlagPost(&RouterStatus, TASK_CLEAR_FIFO, OS_OPT_POST_FLAG_SET, &err);
    }
    XGPIO_IR_MASK(0);
}



///////////////////////////////////////////////////////////////////////////////////////
//									TASKS
///////////////////////////////////////////////////////////////////////////////////////

/*
 *********************************************************************************************************
 *											  TaskGeneratePacket
 *  - Génère des paquets et les envoie dans la InputQ.
 *
 *
 *********************************************************************************************************
 */

void TaskGenerate(void *data) {
	srand(42);
	OS_ERR err, perr;
	CPU_TS ts;
	bool isGenPhase = false; 		//Indique si on est dans la phase de generation ou non
	int nb_rafales = 0;
	int packGenQty = (rand() % 255);
	while(true) {
		OSFlagPend(&RouterStatus, TASK_GENERATE_RDY, 0, OS_OPT_PEND_FLAG_SET_ALL + OS_OPT_PEND_BLOCKING, &ts, &err);
		if (isGenPhase) {
			// Nouveau paquet

			OSSemPend(&Sem_MemBlock,0, OS_OPT_PEND_BLOCKING, &ts, &err);
			Packet *packet = (Packet *)OSMemGet(&BLockMem, &err);

		    if(packet == NULL) {
		    	xil_printf("\nTaskGenerate: attention packet no %d est un NULL Pointer", nbPacketCrees);
		    };

			packet->src = rand() * (UINT32_MAX/RAND_MAX);
			packet->dst = rand() * (UINT32_MAX/RAND_MAX);
			packet->type = rand() % NB_PACKET_TYPE;

			for (int i = 0; i < ARRAY_SIZE(packet->data); ++i)
				packet->data[i] = (unsigned int)rand();

#if PERFORMANCE_TRACE == 1
			packet->timestamp = CPU_TS_Get64();
#endif

			packet->data[0] = ++nbPacketCrees;

			// Calcul du CRC avec injection de fautes
			packet->crc = 0;
			packet->crc = computeCRC((uint16_t*) (packet), sizeof(*packet));
			if (nbPacketCrees % 100 == 0) packet->crc++;

#if FULL_TRACE == 1
			OSMutexPend(&mutPrint, 0, OS_OPT_PEND_BLOCKING, &ts, &perr);
			xil_printf("\nTaskGenerate : ********Generation du Paquet # %d ******** \n", nbPacketCrees);
			xil_printf("ADD %x \n", packet);
			xil_printf("	** id : %d \n", packet->data[0]);
			xil_printf("	** src : %x \n", packet->src);
			xil_printf("	** dst : %x \n", packet->dst);
			xil_printf("	** type : %d \n", packet->type);
			OSMutexPost(&mutPrint, OS_OPT_POST_NONE, &perr);
#endif

			OSTaskQPost(&TaskQueueingTCB, packet, sizeof(packet), OS_OPT_POST_FIFO + OS_OPT_POST_NO_SCHED, &err);

			if (err == OS_ERR_Q_MAX || err == OS_ERR_MSG_POOL_EMPTY) {

				safeprintf("\nTaskGenerate: Paquet rejete du FIFO de TaskQueuing !\n");

#if FULL_TRACE == 1
				OSTaskQPost(&TaskStatsTCB, packet, sizeof(packet), OS_OPT_POST_FIFO + OS_OPT_POST_NO_SCHED, &err);
#else
				OSMemPut(&BLockMem, (void *)packet, &err);
				OSSemPost(&Sem_MemBlock,  OS_OPT_POST_1 + OS_OPT_POST_NO_SCHED, &err);
#endif
				nbPacketFIFOpleine++;
			}

			else
				safeprintf("\TaskGenenerate: nb de paquets dans fifo de TaskQueueing - apres production: %d \n", TaskQueueingTCB.MsgQ.NbrEntries);

			if ((nbPacketCrees % packGenQty) == 0) //On genère au maximum 255 paquets par phase de géneration
				{
					safeprintf("\n***** TaskGenerate: FIN DE LA RAFALE No %d \n\n", nb_rafales);
					isGenPhase = false;
				}
		}
		else
		{
			OSTimeDlyHMSM(0, 0, delai_pour_vider_les_fifos_sec, delai_pour_vider_les_fifos_msec, OS_OPT_TIME_HMSM_STRICT, &err);
			isGenPhase = true;
			do { packGenQty = (rand() %255); } while (packGenQty == 0);

		safeprintf("\n***** TaskeGenerate: RAFALE No %d DE %d PAQUETS DURANT LES %d PROCHAINES MILLISECONDES\n\n", ++nb_rafales, packGenQty, packGenQty);
		safeprintf("\n***** TaskGenerate: DEMARRAGE \n\n");

		}
	}
}

void TaskClearFifo(void *data) {
    CPU_TS ts;
    OS_ERR err;

    while (true) {
        OSFlagPend(&RouterStatus, TASK_CLEAR_FIFO_RDY, 0, OS_OPT_PEND_BLOCKING, &ts, &err);

        if (Status_TaskComputing != Prev_Status_TaskComputing) {
            ClearFifos();
            NbrEntriesMax[0] = 0;
            max_delay_video = 0;
            max_delay_audio = 0;
            max_delay_autre = 0;

            OSFlagPost(&RouterStatus, TASK_STATS_PRINT, OS_OPT_POST_FLAG_SET, &err);
        }
    }
}

/*
 *********************************************************************************************************
 *											  TaskReset
 *
 *********************************************************************************************************
 */
void TaskReset(void* data) {
	CPU_TS ts;
	OS_ERR err;
	int i;
	OS_FLAGS  flags;
	while (true) {
//		OSTimeDlyHMSM(0, 0, 30, 0, OS_OPT_TIME_HMSM_STRICT, &err);
		xil_printf("--------------------- Task Reset --------------------\n");
		flags = OSFlagPost(&RouterStatus, TASKS_ROUTER, OS_OPT_POST_FLAG_SET, &err);
		xil_printf("--------------------- Flags: %x --------------------------\n", RouterStatus.Flags);
		OSTaskSuspend((OS_TCB *)0,&err);

		}
}

void TaskStop(void *data) {
    CPU_TS ts;
    OS_ERR err;
    
    while (true) {
        OSFlagPend(&RouterStatus, TASK_STOP_RDY, 0, OS_OPT_PEND_BLOCKING, &ts, &err);

        OSFlagPost(&RouterStatus, TASK_STATS_PRINT, OS_OPT_POST_FLAG_SET, &err);

        if (nbPacketCRCRejete <= LIMIT) {
            safeprintf("-------- Task stop suspend all tasks -------\n");
            SetSystemState(SUSPENDED);
            OSFlagPost(&RouterStatus, TASKS_ROUTER, OS_OPT_POST_FLAG_CLR, &err);
        }
    }
}

/*
 *********************************************************************************************************
 *                                            computeCRC
 * -Calcule la check value d'un pointeur quelconque (cyclic redudancy check)
 * -Retourne 0 si le CRC est correct, une autre valeur sinon.
 *********************************************************************************************************
 */

unsigned int  computeCRC(uint16_t* w, int nleft) {

	unsigned int sum = 0;
	unsigned int nb_calls = 0;
	unsigned int Nb_of_ticks_in_CRC_init = 0;

	OS_ERR err;
	uint16_t answer = 0;

	// Code à compléter pour le calcul du nombre de ticks dans la manipulation 1



	// Adding words of 16 bits
	while (nleft > 1) {
		sum += *w++;
		nleft -= 2;
	}

	// Handling the last byte
	if (nleft == 1) {
		*(unsigned char *) (&answer) = *(const unsigned char *) w;
		sum += answer;
	}

	// Handling overflow
	sum = (sum & 0xffff) + (sum >> 16);
	sum += (sum >> 16);

	answer = ~sum;

	// Code à compléter pour le calcul du nombre de ticks dans la manipulation 1

	return answer;
}



/*
 *********************************************************************************************************
 *											  TaskQueeing
 *
 *********************************************************************************************************
 */
void TaskQueueing(void *pdata) {
	OS_ERR err, perr;
	CPU_TS ts;
	OS_MSG_SIZE msg_size;
	Packet *packet = NULL;
	OS_TICK actualticks = 0;
	while(true){

		OSFlagPend(&RouterStatus, TASK_QUEUING_RDY, 0, OS_OPT_PEND_FLAG_SET_ALL + OS_OPT_PEND_BLOCKING, &ts, &err);


		packet = OSTaskQPend(0, OS_OPT_PEND_BLOCKING, &msg_size, &ts, &err);

		safeprintf("\nTaskQueuing: nb de paquets apres consommation du fifo: %d \n", TaskQueueingTCB.MsgQ.NbrEntries);

		if (computeCRC((uint16_t*)packet, sizeof(*packet)) != 0) {

			safeprintf("\nTaskQueuing: Mauvais CRC !\n");

#if FULL_TRACE == 1
			OSTaskQPost(&TaskStatsTCB, packet, sizeof(packet), OS_OPT_POST_FIFO + OS_OPT_POST_NO_SCHED, &err);
#else
			OSMemPut(&BLockMem, (void *)packet, &err);
			OSSemPost(&Sem_MemBlock,  OS_OPT_POST_1 + OS_OPT_POST_NO_SCHED, &err);
#endif
			++nbPacketMauvaisCRC;
		}

		else {

			//Dispatche les paquets selon leur type
			switch (packet->type) {
			case PACKET_VIDEO:
				OSTaskQPost(&TaskComputingTCB[PACKET_VIDEO], packet, sizeof(packet),OS_OPT_POST_FIFO, &err);
				safeprintf("\nTaskQueueing: nb de paquets dans TaskComputing HIGHQ apres production : %d \n", TaskComputingTCB[PACKET_VIDEO].MsgQ.NbrEntries);
				break;

			case PACKET_AUDIO:
				OSTaskQPost(&TaskComputingTCB[PACKET_AUDIO], packet, sizeof(packet),OS_OPT_POST_FIFO, &err);
				safeprintf("\nTaskQueueing: nb de paquets dans TaskComputing MEDIUMQ apres production : %d \n", TaskComputingTCB[PACKET_VIDEO].MsgQ.NbrEntries);
				break;

			case PACKET_AUTRE:
				OSTaskQPost(&TaskComputingTCB[PACKET_AUTRE], packet, sizeof(packet),OS_OPT_POST_FIFO, &err);
				safeprintf("\nTaskQueueing: nb de paquets dans TaskComputing LOWQ apres production: %d \n", TaskComputingTCB[PACKET_AUTRE].MsgQ.NbrEntries);
				break;

			default:
				safeprintf("\TaskQueueing: Erreur sur la priorite du paquet - %d \n", packet->data[0]);
#if FULL_TRACE == 1
				OSTaskQPost(&TaskStatsTCB, packet, sizeof(packet), OS_OPT_POST_FIFO + OS_OPT_POST_NO_SCHED, &err);
#else
				OSMemPut(&BLockMem, (void *)packet, &err);
				OSSemPost(&Sem_MemBlock,  OS_OPT_POST_1 + OS_OPT_POST_NO_SCHED, &err);
#endif
				nbPacketMauvaisePriorite++;
				break;
			}

			if (err == OS_ERR_Q_MAX || err == OS_ERR_MSG_POOL_EMPTY) {
				safeprintf("\nTaskQueueing: Paquet rejete de FIFO no %d de TaskComputing\n", packet->type);
#if FULL_TRACE == 1
				OSTaskQPost(&TaskStatsTCB, packet, sizeof(packet), OS_OPT_POST_FIFO + OS_OPT_POST_NO_SCHED, &err);
#else
				OSMemPut(&BLockMem, (void *)packet, &err);
				OSSemPost(&Sem_MemBlock,  OS_OPT_POST_1 + OS_OPT_POST_NO_SCHED, &err);
#endif
				nbPacketFIFOpleine++;
			}
		}
	}

}


/*
 *********************************************************************************************************
 *											  TaskComputing
 *  -Vérifie si les paquets sont conformes i.e. qu on emule un CRC et on verifie l espace addresse
 *  -Dispatche les paquets dans des files (HIGH,MEDIUM,LOW)
 *
 *********************************************************************************************************
 */
void TaskComputing(void *pdata) {
	OS_ERR err, perr;
	CPU_TS ts;
	OS_MSG_SIZE msg_size;
	Packet *packet = NULL;
	OS_TICK actualticks = 0;
	Info_FIFO info = *(Info_FIFO*)pdata;
	CPU_TS64 temps_courant;
	int WAITFORTICKS;
	float nombre;
	while(true){


		OSFlagPend(&RouterStatus, TASK_COMPUTING_RDY, 0, OS_OPT_PEND_FLAG_SET_ALL + OS_OPT_PEND_BLOCKING, &ts, &err);

		packet = OSTaskQPend(0, OS_OPT_PEND_BLOCKING, &msg_size, &ts, &err);

		safeprintf("\nTaskComputing %s: nb de paquets apres consommation du fifo: %d \n", info.name, TaskComputingTCB[info.id].MsgQ.NbrEntries);

		// 1. Verrouiller le mutex pour HighQ (PACKET_VIDEO) et LowQ (PACKET_AUTRE)
		        if (info.id == PACKET_VIDEO || info.id == PACKET_AUTRE) {
		            OSMutexPend(&mutTaskComputing, 0, OS_OPT_PEND_BLOCKING, &ts, &err);
		        }

		//Verification de l'espace d'addressage
		if ((packet->src > REJECT_LOW1 && packet->src < REJECT_HIGH1) ||
			(packet->src > REJECT_LOW2 && packet->src < REJECT_HIGH2) ||
			(packet->src > REJECT_LOW3 && packet->src < REJECT_HIGH3)) {

			safeprintf("\nTaskComputing %s: paquet mauvaise source\n", info.name);

#if FULL_TRACE == 1
			OSTaskQPost(&TaskStatsTCB, packet, sizeof(packet), OS_OPT_POST_FIFO + OS_OPT_POST_NO_SCHED, &err);
#else
			OSMemPut(&BLockMem, (void *)packet, &err);
			OSSemPost(&Sem_MemBlock,  OS_OPT_POST_1 + OS_OPT_POST_NO_SCHED, &err);
#endif
			nbPacketMauvaiseSource++;

		}

		else {    // we can start processing and forwarding

			// we may emulate a certain time for the processing and also emulate priority inheritance

			/*
			   structure de switch sur packet->type
			   et donnez une valeur aleatoire dans l'intervalle [0 et 2] tick
			   pour chaque type de paquet

			 */
				switch (packet->type) {
						case PACKET_VIDEO:
							WAITFORTICKS = (rand() % 2);
							break;
						case PACKET_AUDIO:
							WAITFORTICKS = (rand() % 2);
							break;
						case PACKET_AUTRE:
							WAITFORTICKS = (rand() % 2);
							break;
						default:
							WAITFORTICKS = 0;
							break;
					}

					CPU_TS64 actualticks = OSTimeGet(&err);
					while (WAITFORTICKS + actualticks > OSTimeGet(&err));





			/* Test sur la destination du paquet */
			if(packet->dst >= INT1_LOW && packet->dst <= INT1_HIGH ){

				safeprintf("\nTaskComputing %s: paquet envoye dans interface 1\n", info.name);
#if PERFORMANCE_TRACE == 1
				Update_TS(packet);
#endif
				OSTaskQPost(&TaskOutputPortTCB[0], packet, sizeof(packet),OS_OPT_POST_FIFO, &err);
			}
			else {
					if (packet->dst >= INT2_LOW && packet->dst <= INT2_HIGH ){
					safeprintf("\nTaskComputing %s: paquet envoye dans interface 2\n", info.name);
#if PERFORMANCE_TRACE == 1
					Update_TS(packet);
#endif
					OSTaskQPost(&TaskOutputPortTCB[1], packet, sizeof(packet),OS_OPT_POST_FIFO, &err);
					}
					else {
						if(packet->dst >= INT3_LOW && packet->dst <= INT3_HIGH ){
							safeprintf("\nTaskComputing %s: paquet envoye dans interface 3\n", info.name);
#if PERFORMANCE_TRACE == 1
							Update_TS(packet);
#endif
							OSTaskQPost(&TaskOutputPortTCB[2], packet, sizeof(packet),OS_OPT_POST_FIFO, &err);
							}
							else {
								if(packet->dst >= INT_BC_LOW && packet->dst <= INT_BC_HIGH){
								Packet* others[2];
								int i;
								for (i = 0; i < ARRAY_SIZE(others); ++i) {
									OSSemPend(&Sem_MemBlock,0, OS_OPT_PEND_BLOCKING, &ts, &err);
									others[i] = (Packet *)OSMemGet(&BLockMem, &err);
									memcpy(others[i], packet, sizeof(Packet));
									}
								safeprintf("\nTaskComputing %s: paquet BC arrive dans tous les interfaces\n", info.name);
#if PERFORMANCE_TRACE == 1
								Update_TS(packet);
#endif
								OSTaskQPost(&TaskOutputPortTCB[0], packet, sizeof(packet), OS_OPT_POST_FIFO, &err);
								OSTaskQPost(&TaskOutputPortTCB[1], others[0], sizeof(others[0]), OS_OPT_POST_FIFO, &err);
								OSTaskQPost(&TaskOutputPortTCB[2], others[1], sizeof(others[1]), OS_OPT_POST_FIFO, &err);
								}
							}
					}
			}

			if(err == OS_ERR_Q_MAX || err == OS_ERR_MSG_POOL_EMPTY) {
				/*Destruction du paquet si la mailbox de destination est pleine*/

				safeprintf("\nTaskComputing %s: paquet rejete d'un des fifo de TaskOutputPort!\n", info.name);
#if FULL_TRACE == 1
				OSTaskQPost(&TaskStatsTCB, packet, sizeof(packet), OS_OPT_POST_FIFO + OS_OPT_POST_NO_SCHED, &err);
#else
				OSMemPut(&BLockMem, (void *)packet, &err);
				OSSemPost(&Sem_MemBlock,  OS_OPT_POST_1 + OS_OPT_POST_NO_SCHED, &err);
#endif
				nbPacketFIFOpleine++;
			}
			else {
				++nbPacketTraites;
			}

		}
		 // 2. Libérer le mutex après le traitement pour HighQ (PACKET_VIDEO) et LowQ (PACKET_AUTRE)
		if (info.id == PACKET_VIDEO || info.id == PACKET_AUTRE) {
			OSMutexPost(&mutTaskComputing, OS_OPT_POST_NONE, &err);
		}

	}
}


/*
 *********************************************************************************************************
 *											  TaskPrint
 *  -Affiche les infos des paquets arrivés à destination et libere la mémoire allouée
 *********************************************************************************************************
 */
void TaskOutputPort(void *data) {
	OS_ERR err, perr;
	CPU_TS ts;
	OS_MSG_SIZE msg_size;
	Packet* packet = NULL;
	Info_Port info = *(Info_Port*)data;

	while(1){

		OSFlagPend(&RouterStatus, TASK_OUTPUTPORT_RDY, 0, OS_OPT_PEND_FLAG_SET_ALL + OS_OPT_PEND_BLOCKING, &ts, &err);

		/*Attente d'un paquet*/
		packet = OSTaskQPend (0, OS_OPT_PEND_BLOCKING, &msg_size, &ts, &err);

#if FULL_TRACE == 1
		OSMutexPend(&mutPrint, 0, OS_OPT_PEND_BLOCKING, &ts, &perr);
		xil_printf("\nPaquet recu en %d \n", info.id);
		xil_printf("	** id : %d \n", packet->data[0]);
		xil_printf("    >> src : %x \n", packet->src);
		xil_printf("    >> dst : %x \n", packet->dst);
		xil_printf("    >> type : %d \n", packet->type);
		OSMutexPost(&mutPrint, OS_OPT_POST_NONE, &perr);
#endif

		/*Libération de la mémoire*/
		OSMemPut(&BLockMem, (void *)packet, &err);
		OSSemPost(&Sem_MemBlock,  OS_OPT_POST_1, &err);
	}

}

/*
 *********************************************************************************************************
 *                                              TaskStats
 *  -Est déclenchée lorsque le gpio_isr() libère le sémaphore
 *  -Lorsque déclenchée, imprime les statistiques du routeur à cet instant
 *********************************************************************************************************
 */
 void TaskStats(void* pdata) {
	OS_ERR err, perr;
	CPU_TS ts;
	OS_TICK actualticks;
	Packet* packet = NULL;
	OS_MSG_SIZE msg_size;

	while (1) {

		OSFlagPend(&RouterStatus, TASK_STATS_RDY, 0, OS_OPT_PEND_FLAG_SET_ALL + OS_OPT_PEND_BLOCKING, &ts, &err);
		OSFlagPend(&RouterStatus, TASK_STATS_PRINT, 0, OS_OPT_PEND_FLAG_SET_ALL + OS_OPT_PEND_BLOCKING, &ts, &err);  // New OSFlagPend added

		OSMutexPend(&mutPrint, 0, OS_OPT_PEND_BLOCKING, &ts, &err);

		xil_printf("\n------------------ Affichage des statistiques ------------------\n\n");
		xil_printf("Delai pour vider les fifos sec: %d\n", delai_pour_vider_les_fifos_sec);
		xil_printf("Delai pour vider les fifos msec: %d\n", delai_pour_vider_les_fifos_msec);
		xil_printf("Frequence du systeme: %d\n", OS_CFG_TICK_RATE_HZ);
		
		xil_printf("1 - Nb de packets total crees : %d\n", nbPacketCrees);
		xil_printf("2 - Nb de packets total traites : %d\n", nbPacketTraites);
		
		nbPacketRejetes = nbPacketMauvaisCRC + nbPacketMauvaiseSource + nbPacketFIFOpleine + nbPacketMauvaisePriorite;
		xil_printf("3 - Nb de packets rejetes pour mauvaise source : %d\n", nbPacketMauvaiseSource);
		xil_printf("4 - Nb de packets rejetes pour mauvaise source total: %d\n", nbPacketMauvaiseSourceTotal);
		xil_printf("5 - Nb de packets rejetes pour mauvais CRC : %d\n", nbPacketMauvaisCRC);
		xil_printf("6 - Nb de packets rejetes pour mauvais CRC total : %d\n", nbPacketMauvaisCRCTotal);
		xil_printf("7 - Nb de paquets rejetes fifo : %d\n", nbPacketFIFOpleine);
		xil_printf("8 - Nb de paquets rejetes fifo total : %d\n", nbPacketFIFOpleineTotal);
		xil_printf("9 - Nb de paquets rejetes mauvaise priorites : %d\n", nbPacketMauvaisePriorite);
		xil_printf("10 - Nb de paquets rejetes mauvaise priorites total : %d\n", nbPacketMauvaisePrioriteTotal);
		xil_printf("11 - Nb de paquets maximum dans le fifo de Queueing : %d \n", TaskQueueingTCB.MsgQ.NbrEntriesMax);
		xil_printf("12 - Nb de paquets maximum dans le fifo HIGHQ de TaskComputing: %d \n", TaskComputingTCB[PACKET_VIDEO].MsgQ.NbrEntriesMax);
		xil_printf("13 - Nb de paquets maximum dans fifo MEDIUMQ de TaskComputing: %d \n", TaskComputingTCB[PACKET_AUDIO].MsgQ.NbrEntriesMax);
		xil_printf("14 - Nb de paquets maximum dans fifo LOWQ de TaskComputing: %d \n", TaskComputingTCB[PACKET_AUTRE].MsgQ.NbrEntriesMax);
		xil_printf("15 - Nb de paquets maximum dans port0 : %d \n", TaskOutputPortTCB[0].MsgQ.NbrEntriesMax);
		xil_printf("16 - Nb de paquets maximum dans port1 : %d \n", TaskOutputPortTCB[1].MsgQ.NbrEntriesMax);
		xil_printf("17 - Nb de paquets maximum dans port2 : %d \n\n", TaskOutputPortTCB[2].MsgQ.NbrEntriesMax);
		xil_printf("18- Message free : %d \n", OSMsgPool.NbrFree);
		xil_printf("19- Message used : %d \n", OSMsgPool.NbrUsed);
		xil_printf("20- Message used max : %d \n", OSMsgPool.NbrUsedMax);
		xil_printf("21- Nombre de ticks depuis le début de l'execution %d \n", OSTimeGet(&err));

		OSMutexPost(&mutPrint, OS_OPT_POST_NONE, &err);

#if PERFORMANCE_TRACE == 1

		max_delay_video_float = (float) max_delay_video / (float) freq_hz;
		xil_printf("22- Pire temps video  ");
		printf("'%.10f'", max_delay_video_float);
		xil_printf("\r\n");

		max_delay_audio_float = (float) max_delay_audio / (float) freq_hz;
		xil_printf("23- Pire temps audio  ");
		printf("'%.10f'", max_delay_audio_float);
		xil_printf("\r\n");

		max_delay_autre_float = (float) max_delay_autre / (float) freq_hz;
		xil_printf("24- Pire temps autre  ");
		printf("'%.10f'", max_delay_autre_float);
		xil_printf("\r\n");

#endif
		// On vide la fifo des paquets rejetés et on imprime si l option est demandee
#if FULL_TRACE == 1

		while(1) {

			packet = OSTaskQPend(0, OS_OPT_PEND_NON_BLOCKING, &msg_size, &ts, &err);  // On prend soin de ne pas resté bloqué
            if (err == OS_ERR_PEND_WOULD_BLOCK) {
                break;
            }
            else {

			if (print_paquets_rejetes)  {
				OSMutexPend(&mutPrint, 0, OS_OPT_PEND_BLOCKING, &ts, &err);
				xil_printf("    >> paquet rejete # : %d \n", packet->data[0]);
				xil_printf("    >> src : %x \n", packet->src);
				xil_printf("    >> dst : %x \n", packet->dst);
				xil_printf("    >> type : %d \n", packet->type);
				OSMutexPost(&mutPrint, OS_OPT_POST_NONE, &err);
			}

			OSMemPut(&BLockMem, (void *)packet, &err);
			OSSemPost(&Sem_MemBlock,  OS_OPT_POST_1, &err);

			packet = NULL;

            };

		};

#endif

		nbPacketMauvaisCRCTotal += nbPacketMauvaisCRC;
		nbPacketMauvaisCRC = 0;
		
		nbPacketMauvaiseSourceTotal += nbPacketMauvaiseSource;
		nbPacketMauvaiseSource = 0;
		
		nbPacketFIFOpleineTotal += nbPacketFIFOpleine;
		nbPacketFIFOpleine = 0;
		
		nbPacketMauvaisePrioriteTotal += nbPacketMauvaisePriorite;
		nbPacketMauvaisePriorite = 0;
		
		nbPacketRejetesTotal = nbPacketMauvaisCRCTotal + nbPacketMauvaiseSourceTotal + nbPacketFIFOpleineTotal + nbPacketMauvaisePrioriteTotal;


		// On stoppe tout le programme quand on a atteint la limite de paquets
		// if (nbPacketCrees > limite_de_paquets)  OSSemPost(&Sem,  OS_OPT_POST_1 + OS_OPT_POST_NO_SCHED, &err);

		// On imprime ls statistiques à toutes les 30 secondes
		// OSTimeDlyHMSM(0, 0, 30, 0, OS_OPT_TIME_HMSM_STRICT, &err);

	}
}


void err_msg(char* entete, uint8_t err)
{
	if(err != 0)
	{
		xil_printf(entete);
		xil_printf(": Une erreur est retournée : code %d \n",err);
	}
}


void StartupTask (void *p_arg)
{
	int i;
		OS_ERR err;
	    KAL_ERR kal_err;
	    CPU_INT32U tick_rate;
	#if (UCOS_START_DEBUG_TRACE == DEF_ENABLED)
	    MEM_SEG_INFO seg_info;
	    LIB_ERR lib_err;
	#endif
	#if (APP_OSIII_ENABLED == DEF_ENABLED)
	#if (OS_CFG_STAT_TASK_EN == DEF_ENABLED)
	    OS_ERR  os_err;
	#endif
	#endif

	    UCOS_IntInit();


	#if (APP_OSIII_ENABLED == DEF_ENABLED)
	    tick_rate = OS_CFG_TICK_RATE_HZ;
	#endif

	#if (APP_OSII_ENABLED == DEF_ENABLED)
	    tick_rate = OS_TICKS_PER_SEC;
	#endif

	    UCOS_TmrTickInit(tick_rate);                                /* Configure and enable OS tick interrupt.              */

	#if (APP_OSIII_ENABLED == DEF_ENABLED)
	#if (OS_CFG_STAT_TASK_EN == DEF_ENABLED)
	    OSStatTaskCPUUsageInit(&os_err);
	#endif
	#endif

	    KAL_Init(DEF_NULL, &kal_err);
	    UCOS_StdInOutInit();
	    UCOS_PrintfInit();


	#if (UCOS_START_DEBUG_TRACE == DEF_ENABLED)
	    UCOS_Print("UCOS - uC/OS Init Started.\r\n");
	    UCOS_Print("UCOS - STDIN/STDOUT Device Initialized.\r\n");
	#endif

	#if (APP_SHELL_ENABLED == DEF_ENABLED)
	    UCOS_Shell_Init();
	#endif

	#if ((APP_FS_ENABLED == DEF_ENABLED) && (UCOS_CFG_INIT_FS == DEF_ENABLED))
	    UCOS_FS_Init();
	#endif

	#if ((APP_TCPIP_ENABLED == DEF_ENABLED) && (UCOS_CFG_INIT_NET == DEF_ENABLED))
	    UCOS_TCPIP_Init();
	#endif /* (APP_TCPIP_ENABLED == DEF_ENABLED) */

	#if ((APP_USBD_ENABLED == DEF_ENABLED) && (UCOS_CFG_INIT_USBD == DEF_ENABLED) && (UCOS_USB_TYPE == UCOS_USB_TYPE_DEVICE))
	    UCOS_USBD_Init();
	#endif /* #if (APP_USBD_ENABLED == DEF_ENABLED) */

	#if ((APP_USBH_ENABLED == DEF_ENABLED) && (UCOS_CFG_INIT_USBH == DEF_ENABLED) && (UCOS_USB_TYPE == UCOS_USB_TYPE_HOST))
	    UCOS_USBH_Init();
	#endif /* #if (APP_USBH_ENABLED == DEF_ENABLED) */

	#if (UCOS_START_DEBUG_TRACE == DEF_ENABLED)
	    Mem_SegRemSizeGet(DEF_NULL, 4, &seg_info, &lib_err);

	    UCOS_Printf ("UCOS - UCOS init done\r\n");
	    UCOS_Printf ("UCOS - Total configured heap size. %d\r\n", seg_info.TotalSize);
	    UCOS_Printf ("UCOS - Total used size after init. %d\r\n", seg_info.UsedSize);
	#endif


    UCOS_Print("Programme initialise - \r\n");

    UCOS_Printf("Frequence courante du tick d horloge - %d\r\n", tick_rate);

    freq_hz = CPU_TS_TmrFreqGet(&err);  /* Get CPU timestamp timer frequency. */
	xil_printf("\nfreq du timestamp: %d\n", freq_hz);


	// On crée les tâches

	for(i = 0; i < NB_FIFO; i++)
	{
		switch(i)
		{
			case 0:
				FIFO[i].id = PACKET_VIDEO;
				FIFO[i].name = "HighQ";
				break;
			case 1:
				FIFO[i].id = PACKET_AUDIO;
				FIFO[i].name = "MediumQ";
				break;
			case 2:
				FIFO[i].id = PACKET_AUTRE;
				FIFO[i].name = "LowQ";
				break;
			default:
				break;
		};
	}

	for(i = 0; i < NB_OUTPUT_PORTS; i++)
	{
		Port[i].id = i;
		switch(i)
		{
			case 0:
				Port[i].name = "Port 0";
				break;
			case 1:
				Port[i].name = "Port 1";
				break;
			case 2:
				Port[i].name = "Port 2";
				break;
			default:
				break;
		};
	}

	OSTaskCreate(&TaskGenerateTCB, 		"TaskGenerate", 	TaskGenerate,	(void*)0, 	TaskGeneratePRIO, 	&TaskGenerateSTK[0u], 	TASK_STK_SIZE / 2, TASK_STK_SIZE, 1, 0, (void*) 0,(OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err );

	OSTaskCreate(&TaskQueueingTCB, 	"TaskQueueing", 	TaskQueueing, 	(void*)0, 	TaskQueueingPRIO, 	&TaskQueueingSTK[0u], 	TASK_STK_SIZE / 2, TASK_STK_SIZE, 1024, 0, (void*) 0,(OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err );

	for(i = 0; i < NB_FIFO; i++){
		OSTaskCreate(&TaskComputingTCB[i], "TaskComputing", 	TaskComputing, &FIFO[i],TaskComputingPRIO+i, &TaskComputingSTK[i][0u], TASK_STK_SIZE / 2, TASK_STK_SIZE, 1024, 0, (void*) 0,(OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err );
	};

	for(i = 0; i < NB_OUTPUT_PORTS; i++){
	OSTaskCreate(&TaskOutputPortTCB[i], "OutputPort", 	TaskOutputPort, &Port[i], TaskOutputPortPRIO, &TaskOutputPortSTK[i][0u], TASK_STK_SIZE / 2, TASK_STK_SIZE, 1, 0, (void*) 0,(OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err );
	};

	OSTaskCreate(&TaskStatsTCB, "TaskStats", TaskStats, (void*)0, TaskStatsPRIO, &TaskStatsSTK[0u], TASK_STK_SIZE / 2, TASK_STK_SIZE, 1024, 0, (void*)0, (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);

	OSTaskCreate(&TaskResetTCB, "TaskReset", TaskReset, (void*)0, TaskResetPRIO, &TaskResetSTK[0u], TASK_STK_SIZE / 2, TASK_STK_SIZE, 1, 0, (void*)0, (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);

    OSTaskCreate(&TaskStopTCB, "TaskStop", TaskStop, (void*)0, TaskStopPRIO, &TaskStopSTK[0u], TASK_STK_SIZE / 2, TASK_STK_SIZE, 1, 0, (void*)0, (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);

    UCOS_Print("Router initialized - Ready to launch - Hit push button\r\n");
    
	OSFlagPend(&RouterStatus, TASK_SHUTDOWN, 0, OS_OPT_PEND_BLOCKING, &ts, &err);
	
	UCOS_Print("Prepare to shutdown System - \r\n");
	
	while (1) {
		TurnLEDButton(0b1111);
		OSTimeDlyHMSM(0, 0, 1, 0, OS_OPT_TIME_HMSM_STRICT, &err);
		TurnLEDButton(0b0000);
		OSTimeDlyHMSM(0, 0, 1, 0, OS_OPT_TIME_HMSM_STRICT, &err);
	}
}

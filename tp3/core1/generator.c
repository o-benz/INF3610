/*
*********************************************************************************************************
*                                                 uC/OS-III
*                                          The Real-Time Kernel
*                                               PORT Windows
*
*
*            		          					Guy BOIS
*                                  Polytechnique Montreal, Qc, CANADA
*
*
*********************************************************************************************************
*/
/* Solution du lab 1 part 3 code sur core 1*/

#include "generator.h"

/* #include "interrupts.h" */

/*DECLARATION DES COMPTEURS POUR STATISTIQUES*/
int nbPacketCrees = 0;								// Nb de packets total crees
int nbPacketTraites = 0;							// Nb de paquets envoyes sur une interface
int nbPacketenSortie = 0;							// Nb de paquets en output
int nbPacketSourceRejeteTotal = 0;					// Nb de packets total rejetés pour mauvaise source
int nbPacketSourceRejete = 0;						// Nb de packets rejete pour mauvaise source pour 30 sec
int packet_rejete_fifo_pleine_inputQ = 0;			// Utilisation de la fifo d'entrÃ©e
int packet_rejete_output_port_plein = 0;			// Utilisation des MB
int packet_rejete_fifo_pleine_Q = 0;
int delai_pour_vider_les_fifos_sec = 1;
int delai_pour_vider_les_fifos_msec = 0;
int print_paquets_rejetes = 0;


int routerIsOn = 0;

// À utiliser pour suivre le remplissage et le vidage des fifos
// Mettre en commentaire et utiliser la fonction vide suivante si vous ne voulez pas de trace
//	#define safeprintf(fmt, ...)															\
//{																						\
//	OSMutexPend(&mutPrint, 0, OS_OPT_PEND_BLOCKING, &ts, &perr);						\
//	xil_printf(fmt, ##__VA_ARGS__);														\
//	OSMutexPost(&mutPrint, OS_OPT_POST_NONE, &perr);									\
//}

// À utiliser pour ne pas avoir les traces de remplissage et de vidage des fifos
#define safeprintf(fmt, ...)															\
{																						\
}




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

    Xil_DCacheDisable();
 //   Xil_DCacheInvalidateRange(BASEADDR, 255*sizeof(Packet)+0x1C);

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


	// Creation des mutex


	// Creation des files externes  - vous pourrez diminuer au besoin la longueur des files
	OSMutexCreate(&mutPrint, "mutPrint", &err);

	return 0;
}

int delete_events() {
	OS_ERR err;

	// Suppressison des sémaphores
	// No Semaphore

	// Suppression des mutex
	// No Mutex

	// Suppression des files externes
	// No Queues

	// Suppression des flags
	// No Flags

}

void endExecution(){
	xil_printf("Core 1: Shutdown\r\n");

	delete_events();
	delete_tasks();

	while(1){

	}
}

void delete_tasks(){

OS_ERR err;

OSTaskDel(&TaskGenerateTCB, &err);

//Supression de la tâche en cours d'exécution
OSTaskDel(&StartupTaskTCB, &err);

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

//	++ nb_calls_CRC;


	return answer;
}



/*
 *********************************************************************************************************
 *											  TaskGeneratePacket (version AMD)
 *  
 *
 *********************************************************************************************************
 */

void TaskGenerate(void *data) {
	srand(42);
	OS_ERR err = 0;
	int packGenQty;
	int burst_number = 1;
	CPU_TS ts;
	OS_TICK TimeRemainToShutDown;
	OS_STATE ShutdownTmrState;

	volatile uint32_t* req = (uint32_t*) (BASEADDR + 0x00);	// signal comme quoi on est prêt à recevoir un data
	volatile uint32_t* ack = (uint32_t*) (BASEADDR + 0x04);	// signal comme quoi on attend que le producteur soit pret
	volatile uint32_t* burst_no = (uint32_t*) (BASEADDR + 0x08); // No du burst
	volatile uint32_t* number_of_packets = (uint32_t*) (BASEADDR + 0x0C); // Nombre de paquets

	Packet *ppacket;

	*req = 0;
	*ack = 0;

	while(true) {

//		    OSFlagPend(&RouterStatus, TASK_GENERATE_RDY, 0, OS_OPT_PEND_FLAG_SET_ALL + OS_OPT_PEND_BLOCKING, &ts, &err);

			ppacket = BASEADDR + 0x10;
			do { packGenQty = (rand() %255); } while (packGenQty == 0);


			*number_of_packets = packGenQty;

//			xil_printf("GENERATE: Debut rafale no: %d  avec %d paquets\n", burst_number, *number_of_packets);


			for (int i = 1; i <= packGenQty; ++i) {

//				xil_printf("valeur du pointeur de paquets: %p \n", ppacket);

				ppacket->src = rand() * (UINT32_MAX/RAND_MAX);
				ppacket->dst = rand() * (UINT32_MAX/RAND_MAX);
				ppacket->type = rand() % NB_PACKET_TYPE;

				for (int j = 0; j < ARRAY_SIZE(ppacket->data); ++j)
					ppacket->data[j] = (unsigned int)rand();
				
				ppacket->timestamp = CPU_TS_Get64();

				ppacket->data[0] = ++nbPacketCrees;

				// Calcul du CRC avec injection de fautes
				ppacket->crc = 0;
				ppacket->crc = computeCRC((uint16_t*) (ppacket), sizeof(*ppacket));
				if (nbPacketCrees % 100 == 0) ppacket->crc++;


//							OSMutexPend(&mutPrint, 0, OS_OPT_PEND_BLOCKING, &ts, &err);
//								xil_printf("TASK GENERATE : ********Generation du Paquet # %d ******** \n", nbPacketCrees);
//								xil_printf("ADD %x \n", ppacket);
//								xil_printf("	** id : %d \n", ppacket->data[0]);
//								xil_printf("	** src : %x \n", ppacket->src);
//								xil_printf("	** dst : %x \n", ppacket->dst);
//								xil_printf("	** type : %d \n", ppacket->type);
//							OSMutexPost(&mutPrint, OS_OPT_POST_NONE, &err);

				ppacket++; // +16 (on se positionne au prochain paquet)

//				OSTimeDlyHMSM(0, 0, 0, 1, OS_OPT_TIME_HMSM_STRICT, &err);        // N.B. Pu besoin d'attendre entre chaque paquet car on met dans la DDR au plus vite...


				}

			*burst_no = burst_number;

//			OSTimeDlyHMSM(0, 0, 0, 50, OS_OPT_TIME_HMSM_STRICT, &err);



			while(!*ack);

			*req = 1;

//			xil_printf("Task_Generate Fin rafale no: %d completee avec %d paquets\n", *burst_no, *number_of_packets);

			while(*ack);

			*req = 0;

//			if(*done == 1){
//					endExecution();
//				}

//			xil_printf("GENERATE: Fin rafale no: %d  avec %d paquets\n", burst_number, *number_of_packets);

			burst_number++;

		}

}

void StartupTask (void *p_arg)
{


	int i;
	OS_ERR err;
	CPU_TS ts;
	OS_FLAGS  flags;
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


	// On crée les tâches

	OSTaskCreate(&TaskGenerateTCB, 		"TaskGenerate", 	TaskGenerate,	(void*)0, 	TaskGeneratePRIO, 	&TaskGenerateSTK[0u], 	TASK_STK_SIZE / 2, TASK_STK_SIZE, 1, 0, (void*) 0,(OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err );

	UCOS_Print("Generator initialized - Ready to launch\r\n");

	OSTaskSuspend((OS_TCB *)0,&err);



	};


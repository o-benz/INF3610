/*
 * router.h
 *
 *  Created on: 26 July 2020
 *      Author: Guy BOIS
 */

#ifndef SRC_ROUTEUR_H_EXT_
#define SRC_ROUTEUR_H_EXT_

#include <os.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>

#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))

#define TASK_STK_SIZE 8192

/* ************************************************
 *                TASK PRIOS
 **************************************************/

#define          TaskGeneratePRIO   			15
#define			 TaskStatsPRIO 					12
#define          TaskQueueingPRIO  				21
#define          TaskComputingPRIO 				22
#define          TaskOutputPortPRIO     		20
#define          TaskResetPRIO     				14
#define          TaskStopPRIO     				13



#define			 WAITFORComputing				1

#define 		 FULL_TRACE 					1
#define 		 PERFORMANCE_TRACE				1

// Routing info.

#define NB_OUTPUT_PORTS 3
#define NB_FIFO 3

#define INT1_LOW      0x00000000
#define INT1_HIGH     0x3FFFFFFF
#define INT2_LOW      0x40000000
#define INT2_HIGH     0x7FFFFFFF
#define INT3_LOW      0x80000000
#define INT3_HIGH     0xBFFFFFFF
#define INT_BC_LOW    0xC0000000
#define INT_BC_HIGH   0xFFFFFFFF

// Reject source info.
#define REJECT_LOW1   0x10000000
#define REJECT_HIGH1  0x17FFFFFF
#define REJECT_LOW2   0x50000000
#define REJECT_HIGH2  0x57FFFFFF
#define REJECT_LOW3   0xD0000000
#define REJECT_HIGH3  0xD7FFFFFF

// Evenements lies aux taches
#define TASK_GENERATE_RDY  		0x01
#define TASK_QUEUING_RDY  		0x02
#define TASK_COMPUTING_RDY  	0x04
#define TASK_OUTPUTPORT_RDY  	0x08
#define TASK_STATS_RDY  		0x10
#define FlagTaskComputing 		0x8000

#define PACKET_VIDEO  			0
#define PACKET_AUDIO  			1
#define PACKET_AUTRE  			2
#define NB_PACKET_TYPE 			3

// Mask
#define TASKS_ROUTER			0x801F     // Permet de demarrer ou stopper toutes les taches au meme moment

OS_FLAG_GRP RouterStatus;

OS_SEM	Sem;
OS_SEM	Sem_MemBlock;
OS_SEM	SemTaskComputing;

typedef struct{
	int id;
	char* name;
} Info_Port;

typedef struct{
	int id;
	char* name;
} Info_FIFO;

Info_Port  	Port[NB_OUTPUT_PORTS];
Info_FIFO 	FIFO[NB_FIFO];


typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned int type;
    CPU_TS64 timestamp;
    unsigned int crc;
    unsigned int data[10];
} Packet;						//16 mots de 32 bits par paquet


// Stacks
static CPU_STK TaskGenerateSTK[TASK_STK_SIZE];
static CPU_STK TaskQueueingSTK[TASK_STK_SIZE];
static CPU_STK TaskComputingSTK[NB_FIFO][TASK_STK_SIZE];
static CPU_STK TaskOutputPortSTK[NB_OUTPUT_PORTS][TASK_STK_SIZE];
static CPU_STK TaskStatsSTK[TASK_STK_SIZE];
static CPU_STK TaskResetSTK[TASK_STK_SIZE];
static CPU_STK TaskStopSTK[TASK_STK_SIZE];
static CPU_STK StartupTaskStk[TASK_STK_SIZE];



static OS_TCB TaskGenerateTCB;
static OS_TCB TaskStatsTCB;
static OS_TCB TaskQueueingTCB;
static OS_TCB TaskComputingTCB[NB_FIFO];
static OS_TCB TaskOutputPortTCB[NB_OUTPUT_PORTS];
static OS_TCB TaskResetTCB;
static OS_TCB TaskStopTCB;
static OS_TCB StartupTaskTCB;



/* ************************************************
 *                  Queues
 **************************************************/

OS_Q source_errQ;
OS_Q crc_errQ;

/* ************************************************
 *                  Semaphores
 **************************************************/

// Pas de sémaphore pour la partie 1 

/* ************************************************
 *                  Mutexes
 **************************************************/
OS_MUTEX 		mutRejete;
OS_MUTEX 		mutPrint;
OS_MUTEX 		mutAlloc;
OS_MUTEX 		mutPrint;
OS_MUTEX 		mutTaskComputing;
OS_MEM   		BLockMem;
CPU_INT32U 		*Tab_Block[10000][sizeof(Packet)];     /* 10000 packets of 16 words of 32 bits */


/*DECLARATION DES COMPTEURS POUR STATISTIQUES*/
int nbPacketCrees = 0;
int nbPacketTraites = 0;
int nbPacketRejetes = 0;
int nbPacketRejetesTotal = 0;
int nbPacketFIFOpleine = 0;
int nbPacketFIFOpleineTotal = 0;
int nbPacketMauvaiseSource = 0;
int nbPacketMauvaiseSourceTotal = 0;
int nbPacketMauvaisCRC =0;
int nbPacketMauvaisCRCTotal =0;
int nbPacketMauvaisePriorite =0;
int nbPacketMauvaisePrioriteTotal = 0;

int delai_pour_vider_les_fifos_sec = 1;
int delai_pour_vider_les_fifos_msec = 0;
int print_paquets_rejetes = 0;
int limite_de_paquets= 100000;

/* ************************************************
 *              TASK PROTOTYPES
 **************************************************/

void TaskGenerate(void *data); 
void TaskComputing(void *data);
void TaskForwarding(void *data);
void TaskOutputPort(void *data);
void TaskStats(void* data);
void StartupTask(void *data);

void dispatch_packet (Packet* packet);

void create_application();
int create_tasks();
int create_events();
void err_msg(char* ,uint8_t);
void Suspend_Delay_Resume_All(int nb_sec);
unsigned int computeCRC(uint16_t* w, int nleft);

#endif /* SRC_ROUTEUR_H_EXT_ */

/*
 * router.h
 *
 *  Created on: 26 July 2020
 *      Author: Guy BOIS
 */

#ifndef SRC_ROUTEUR_H_EXT_
#define SRC_ROUTEUR_H_EXT_

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


#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))

#define TASK_STK_SIZE 8192

//Adresses mémoire partagée
static const uint32_t 	BASEADDR = 0x3FF0000;

/* ************************************************
 *                TASK PRIOS
 **************************************************/

#define          TaskGeneratePRIO   			15


typedef struct{
	int id;
	char* name;
} Info_Port;

typedef enum {
	PACKET_VIDEO,
	PACKET_AUDIO,
	PACKET_AUTRE,
	NB_PACKET_TYPE
} PACKET_TYPE;

typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned int type;
    CPU_TS64 timestamp;
    unsigned int crc;
    unsigned int data[10];
} Packet;

// Stacks
static CPU_STK TaskGenerateSTK[TASK_STK_SIZE];
static CPU_STK StartupTaskStk[TASK_STK_SIZE];

#define TASK_GENERATE_RDY  		0x01

static OS_TCB TaskGenerateTCB;
static OS_TCB StartupTaskTCB;



/* ************************************************
 *                  Queues
 **************************************************/




/* ************************************************
 *                  Semaphores
 **************************************************/


/* ************************************************
 *                  Mutexes
 **************************************************/

OS_MUTEX 		mutPrint;


/* ************************************************
 *              TASK PROTOTYPES
 **************************************************/

//void TaskGenerate(void *data);
void TaskComputing(void *data);
void StartupTask(void *data);


void create_application();
int create_tasks();
int create_events();
int delete_events();
void err_msg(char* ,uint8_t);

// Watchdog's callback function
void ShutdownTaskGenerateFct(OS_TMR *p_tmr, void *p_arg);

#endif /* SRC_ROUTEUR_H_EXT_ */

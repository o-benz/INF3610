/*
 *********************************************************************************************************
 *											  Interrupts

 *											  
 *********************************************************************************************************
 */
#include "interrupts.h"

#include "routeur.h"


void initialize_gpio0()
{
	if (XST_DEVICE_NOT_FOUND == XGpio_Initialize(&gpButton, GPIO_BUTTON_DEVICE_ID))
		UCOS_Print("Erreur init gpio\n");
	XGpio_SetDataDirection(&gpButton, 1, 0x1);
	XGpio_SetDataDirection(&gpButton, 2, 0x0);
	XGpio_InterruptGlobalEnable(&gpButton);
	XGpio_InterruptEnable(&gpButton, XGPIO_IR_MASK);

}


void initialize_gpio1()
{
	if (XST_DEVICE_NOT_FOUND == XGpio_Initialize(&gpSwitch, GPIO_SWITCH_DEVICE_ID))
		UCOS_Print("Erreur init gpio\n");
	XGpio_SetDataDirection(&gpSwitch, 1, 0x1);
	XGpio_SetDataDirection(&gpSwitch, 2, 0x0);
	XGpio_InterruptGlobalEnable(&gpSwitch);
	XGpio_InterruptEnable(&gpSwitch, XGPIO_IR_MASK);
}


int initialize_axi_intc() {
	int status;

	status = XIntc_Initialize(&axi_intc, XPAR_AXI_INTC_0_DEVICE_ID);
	if (status != XST_SUCCESS)
		return XST_FAILURE;

	return XST_SUCCESS;
}

int connect_fit_timer_irq0() {
	int status;

	status = XIntc_Connect(&axi_intc, FIT_IRQ0_ID, fit_timer_isr0, NULL);
		if (status != XST_SUCCESS)
			return status;

	XIntc_Enable(&axi_intc, FIT_IRQ0_ID);

	return XST_SUCCESS;


}


int connect_gpio_irq0()
{
	int status = XIntc_Connect(&axi_intc, GPIO_BUTTON_IRQ_ID, gpio_isr0, &gpButton);
	if (status == XST_SUCCESS)
		XIntc_Enable(&axi_intc, GPIO_BUTTON_IRQ_ID);
	return status;
}

int connect_gpio_irq1()
{

	int status = XIntc_Connect(&axi_intc, GPIO_SWITCH_IRQ_ID, gpio_isr1, &gpSwitch);
	if (status == XST_SUCCESS)
		XIntc_Enable(&axi_intc, GPIO_SWITCH_IRQ_ID);
	return status;

}


void connect_axi() {

	// La connexion est sur IRQ ID#31
	CPU_BOOLEAN succes = UCOS_IntVectSet (PL_INTC_IRQ_ID,
			                             1,
			                             0,
										 (UCOS_INT_FNCT_PTR)XIntc_DeviceInterruptHandler,
										 (void*)(uint32_t)axi_intc.CfgPtr->DeviceId);
	if (succes != DEF_OK)
		UCOS_Print ("connect axi : FAIL \n");
	succes = UCOS_IntSrcEn(PL_INTC_IRQ_ID);
	if (succes != DEF_OK)
		UCOS_Print ("enable axi : FAIL \n");

	connect_gpio_irq0();
	connect_gpio_irq1();
	connect_fit_timer_irq0();
	XIntc_Start(&axi_intc, XIN_REAL_MODE);
}

void cleanup() {
	/*
	 * Disconnect and disable the interrupt
	 */

	disconnect_intc_irq();
	disconnect_fit_timer_irq0();
}

void disconnect_intc_irq() {
	UCOS_IntSrcDis(PL_INTC_IRQ_ID);
}

void disconnect_fit_timer_irq0() {
	/*
	 * Disconnect and disable the interrupt
	 */
	XIntc_Disable(&axi_intc, FIT_IRQ0_ID);
}

/*
 void shared_isr(void *p_int_arg, CPU_INT32U source_cpu) {
	uint32_t int_status = XIntc_InterruptGetStatus(&axi_intc);
	XIntc_InterruptClear(&axi_intc, int_status);

	if (int_status & (1 << GPIO_BUTTON_IRQ_ID)) {
		gpio_isr0(p_int_arg, source_cpu);
	}
	if (int_status & (1 << GPIO_SWITCH_IRQ_ID)) {
		gpio_isr1(p_int_arg, source_cpu);
	}
	if (int_status & (1 << FIT_IRQ0_ID)) {
		fit_timer_isr0(p_int_arg, source_cpu);
	}
}

// Connexion des interruptions partag�es
int connect_shared_irq() {
	int status;

	// Connexion de l'ISR partag�e pour les interruptions
	status = XIntc_Connect(&axi_intc, GPIO_BUTTON_IRQ_ID, (XInterruptHandler)shared_isr, NULL);
	if (status != XST_SUCCESS) {
		UCOS_Print("Erreur lors de la connexion de gpio_isr0\n");
		return status;
	}

	status = XIntc_Connect(&axi_intc, GPIO_SWITCH_IRQ_ID, (XInterruptHandler)shared_isr, NULL);
	if (status != XST_SUCCESS) {
		UCOS_Print("Erreur lors de la connexion de gpio_isr1\n");
		return status;
	}

	status = XIntc_Connect(&axi_intc, FIT_IRQ0_ID, (XInterruptHandler)shared_isr, NULL);
	if (status != XST_SUCCESS) {
		UCOS_Print("Erreur lors de la connexion de fit_timer_isr0\n");
		return status;
	}

	// D�marrer le contr�leur d'interruptions en mode r�el
	status = XIntc_Start(&axi_intc, XIN_REAL_MODE);
	if (status != XST_SUCCESS) {
		UCOS_Print("Erreur lors du d�marrage de l'INTC\n");
		return status;
	}

	// Activer les interruptions
	XIntc_Enable(&axi_intc, GPIO_BUTTON_IRQ_ID);
	XIntc_Enable(&axi_intc, GPIO_SWITCH_IRQ_ID);
	XIntc_Enable(&axi_intc, FIT_IRQ0_ID);

	return XST_SUCCESS;
}

 */


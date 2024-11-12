// Evenements (masques) lies aux ISRs
#define TASK_RESET_RDY  			0x20	 // RDV entre gpio_isr0 et TaskReset pour démarrer le système (le bit du masque est mis à 1)
#define TASK_SHUTDOWN				0x40     // RDV entre gpio_isr0 et StartUp  pour suspendre définitivement le système (le bit du masque est remis à 0)
#define TASK_STOP_RDY  				0x80	 // RDV entre fittimer0 ou fittimer1 et TaskStop pour suspendre temporairement le système (le bit du masque est remis à 0)
#define TASK_STATS_PRINT			0x100    // RDV entre TaskStop et TaskStats pour afficher les statistiques
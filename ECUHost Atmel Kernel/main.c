/*
 * ECUHost Atmel Kernel.c
 *
 * Created: 8/28/2016 8:32:19 PM
 * Author : Matthew
 */ 


//#include "sam.h"
extern int EFIMain(void);
extern void SystemInit(void);

int main(void)
{
    /* Initialize the SAM system */
    SystemInit();

    /* Replace with your application code */
    while (1) 
    {
		EFIMain();
    }
}

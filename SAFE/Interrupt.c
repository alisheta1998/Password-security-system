/*
 * Interrupt.c
 *
 *  Created on: Sep 14, 2019
 *      Author: hello
 */
#include "Std_types.h"
#include "Registers.h"
#include <util/delay.h>
#include "Bit_Operations.h"
#include "DIO.h"
#include "Interrupt.h"
#include <avr/interrupt.h>

static void (*Gptr0) (void);
static void (*Gptr1) (void);
static void (*Gptr2) (void);


/* INT0 */
void EXTINT0_SETISR(void (*ptr0) (void))
{
	Gptr0=ptr0;
}
void EXTINT0_Init (void)
{
	DIO_SetPinDirection(PORT3,PIN2,INPUT);   	// External INT0
	DIO_SetPinPullUp(PORT3,PIN2); 				// INT0 Pull up

	SETBIT(SREG,7);								// General INT Enable

	SETBIT(GICR,6);								// INT0 ENable

	switch(INT0_Mode)
	{
	case Fall :
		SETBIT(MCUCR,1); 							// INT0 FALLING EDGE
		CLRBIT(MCUCR,0);
		break;
	case Rise :
		SETBIT(MCUCR,1); 							// INT0 RISING EDGE
		SETBIT(MCUCR,0);
		break;
	case Level :
		CLRBIT(MCUCR,1); 							// INT0 LOW LEVEL
		CLRBIT(MCUCR,0);
		break;
	default :
		break;
	}
}


/* INT1 */
void EXTINT1_SETISR(void (*ptr1) (void))
{
	Gptr1=ptr1;
}
void EXTINT1_Init (void)
{
	DIO_SetPinDirection(PORT3,PIN3,INPUT);   	// External INT1
	DIO_SetPinPullUp(PORT3,PIN3); 				// INT1 Pull up

	SETBIT(SREG,7);								// General INT Enable

	SETBIT(GICR,7);								// INT1 Enable

	switch(INT1_Mode)
	{
	case Fall :
		SETBIT(MCUCR,2); 							// INT1 FALLING EDGE
		CLRBIT(MCUCR,3);
		break;
	case Rise :
		SETBIT(MCUCR,2); 							// INT1 RISING EDGE
		SETBIT(MCUCR,3);
		break;
	case Level :
		CLRBIT(MCUCR,2); 							// INT1 LOW LEVEL
		CLRBIT(MCUCR,3);
		break;
	default :
		break;
	}
}


/* INT2 */
void EXTINT2_SETISR(void (*ptr2) (void))
{
	Gptr2=ptr2;
}
void EXTINT2_Init (void)
{
	DIO_SetPinDirection(PORT1,PIN2,INPUT);   	// External INT2
	DIO_SetPinPullUp(PORT1,PIN2); 				// INT2 Pull up

	SETBIT(SREG,7);								// General INT Enable

	SETBIT(GICR,5);								// INT2 Enable

	switch(INT2_Mode)
	{
	case Fall :
		CLRBIT(MCUCSR,6);							// INT2 Falling Edge
		break;
	case Rise :
		SETBIT(MCUCSR,6);							// INT2 Rising Edge
		break;
	default :
		break;
	}
}

/*ISRs*/
ISR(INT0_vect)
{
	Gptr0();
}
ISR(INT1_vect)
{
	Gptr1();
}
ISR(INT2_vect)
{
	Gptr2();
}

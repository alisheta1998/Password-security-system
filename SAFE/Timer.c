/*
 * Timer.c
 *
 *  Created on: Oct 11, 2019
 *      Author: hello
 */

#include "Std_types.h"
#include "Interrupt.h"
#include "DIO.h"
#include "Bit_Operations.h"
#include "Registers.h"
#include <avr/interrupt.h>
#include "Timer.h"

static void (*Gptr0) (void);
static void (*Gptr1) (void);
static void (*Gptr2) (void);

/*TIMER0 FUNCTIONS*/
void TIM0_Init (void) 	//Where u make a delay for x ms and call a certain ISR after the delay is finished
{
	switch(Timer0_Mode)
	{
	case Normal :
		/*Compare Output Mode Selection*/
		CLRBIT(TCCR0,4);
		CLRBIT(TCCR0,5);
		/*Normal Mode Selection*/
		CLRBIT(TCCR0,3);	//WGM01
		CLRBIT(TCCR0,6);	//WGM00

		/*Clock Source Select*/
		/*Current Prescalar/1024  .... freq.=1ms*/
		switch(Frequency)
		{
		case No_Prescaler :
			SETBIT(TCCR0,0);	//CS00
			CLRBIT(TCCR0,1);	//CS01
			CLRBIT(TCCR0,2);	//CS02
			break;
		case Prescaler_8 :
			CLRBIT(TCCR0,0);	//CS00
			SETBIT(TCCR0,1);	//CS01
			CLRBIT(TCCR0,2);	//CS02
			break;
		default :
			break;
		}

		/*Over Flow Flag Setup*/
		SETBIT(TIMSK,0);		//TOIE0(Overflow Interrupt Enable)
		SETBIT(SREG,7);
		/*Interrupt Setup*/

		break;
	case CTC :
		break;
	default :
		break;

	}
}

ISR(TIMER0_OVF_vect)
{
	Gptr0();
}
ISR(TIMER0_COMP_vect)
{
	Gptr0();
}
void TIM0_Start(void)
{

}
void TIM0_Stop (void)
{
	CLRBIT(TCCR0,0);	//CS00
	CLRBIT(TCCR0,1);	//CS01
	CLRBIT(TCCR0,2);	//CS02
}
void TIM0_SetISR(void (*ptr0) (void))
{
	Gptr0=ptr0;
}

/*TIMER1 FUNCTIONS*/
void TIM1_Init (void)
{

}

void TIM1_Start(void)
{

}
void TIM1_Stop (void)
{

}
void TIM1_SetISR(void (*ptr1) (void))
{
	Gptr1=ptr1;
}
/*TIMER2 FUNCTIONS*/
void TIM2_Init (void)
{

}
ISR(TIMER2_OVF_vect)
{
	Gptr2();
}
ISR(TIMER2_COMP_vect)
{
	Gptr2();
}
void TIM2_Start(void)
{

}
void TIM2_Stop (void)
{

}
void TIM2_SetISR(void (*ptr2) (void))
{
	Gptr2=ptr2;
}



/****PMW FUNCTIONS******/



void PWM0_Init(void)
{
	/*Fast PWM Mode Selection*/
		SETBIT(TCCR0,3);	//WGM01
		SETBIT(TCCR0,6);	//WGM00

	/*Clock Source Select*/
	/*Current Prescalar/1024  .... freq.=3900Hz*/

		SETBIT(TCCR0,0);	//CS00
		CLRBIT(TCCR0,1);	//CS01
		CLRBIT(TCCR0,2);	//CS02

	/*Compare Output Mode : Non Inverting */
		CLRBIT(TCCR0,4);	//COM0
		SETBIT(TCCR0,5);	//COM1


		DIO_SetPinDirection(PORT1,PIN3,OUTPUT);

}
void PWM0_DC(U8 Duty_Cycle)
{
	OCR0 = (U8)(255*(Duty_Cycle/100.0)) ;
}
void PWM1_Init(void)
{

}
void PWM1_DC(U8 Duty_Cycle)
{

}

void PWM2_Init(void)
{

}
void PWM2_DC(U8 Duty_Cycle)
{

}

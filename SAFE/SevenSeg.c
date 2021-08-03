/*
 * SevenSeg.c
 *
 *  Created on: Sep 6, 2019
 *      Author: hello
 */
#include "Std_types.h"
#include "Registers.h"
#include "Bit_Operations.h"
#include "DIO.h"
#include "SevenSeg.h"

void SevenSeg_Init (void)
{
#if PORT_a == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_b == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_c == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_d == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_e == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_f == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_g == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_dp == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_a == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_b == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_c == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_d == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_e == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_f == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_g == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_dp == UNINIT
#error "Missing INITIALIZATION"
#endif

 DIO_SetPinDirection(PORT_a,PIN_a,OUTPUT);
 DIO_SetPinDirection(PORT_b,PIN_b,OUTPUT);
 DIO_SetPinDirection(PORT_c,PIN_c,OUTPUT);
 DIO_SetPinDirection(PORT_d,PIN_d,OUTPUT);
 DIO_SetPinDirection(PORT_e,PIN_e,OUTPUT);
 DIO_SetPinDirection(PORT_f,PIN_f,OUTPUT);
 DIO_SetPinDirection(PORT_g,PIN_g,OUTPUT);
 DIO_SetPinDirection(PORT_dp,PIN_dp,OUTPUT);
}

void SevenSeg_Display(S8 counter)
{
	switch(counter)
			{
			case 0 :
				DIO_SetPinValue(PORT_a,PIN_a,HIGH);
				DIO_SetPinValue(PORT_b,PIN_b,HIGH);
				DIO_SetPinValue(PORT_c,PIN_c,HIGH);
				DIO_SetPinValue(PORT_d,PIN_d,HIGH);
				DIO_SetPinValue(PORT_e,PIN_e,HIGH);
				DIO_SetPinValue(PORT_f,PIN_f,HIGH);
				DIO_SetPinValue(PORT_g,PIN_g,LOW);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 1 :
				DIO_SetPinValue(PORT_a,PIN_a,LOW);
				DIO_SetPinValue(PORT_b,PIN_b,HIGH);
				DIO_SetPinValue(PORT_c,PIN_c,HIGH);
				DIO_SetPinValue(PORT_d,PIN_d,LOW);
				DIO_SetPinValue(PORT_e,PIN_e,LOW);
				DIO_SetPinValue(PORT_f,PIN_f,LOW);
				DIO_SetPinValue(PORT_g,PIN_g,LOW);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 2 :
				DIO_SetPinValue(PORT_a,PIN_a,HIGH);
				DIO_SetPinValue(PORT_b,PIN_b,HIGH);
				DIO_SetPinValue(PORT_c,PIN_c,LOW);
				DIO_SetPinValue(PORT_d,PIN_d,HIGH);
				DIO_SetPinValue(PORT_e,PIN_e,HIGH);
				DIO_SetPinValue(PORT_f,PIN_f,LOW);
				DIO_SetPinValue(PORT_g,PIN_g,HIGH);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 3 :
				DIO_SetPinValue(PORT_a,PIN_a,HIGH);
				DIO_SetPinValue(PORT_b,PIN_b,HIGH);
				DIO_SetPinValue(PORT_c,PIN_c,HIGH);
				DIO_SetPinValue(PORT_d,PIN_d,HIGH);
				DIO_SetPinValue(PORT_e,PIN_e,LOW);
				DIO_SetPinValue(PORT_f,PIN_f,LOW);
				DIO_SetPinValue(PORT_g,PIN_g,HIGH);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 4 :
				DIO_SetPinValue(PORT_a,PIN_a,LOW);
				DIO_SetPinValue(PORT_b,PIN_b,HIGH);
				DIO_SetPinValue(PORT_c,PIN_c,HIGH);
				DIO_SetPinValue(PORT_d,PIN_d,LOW);
				DIO_SetPinValue(PORT_e,PIN_e,LOW);
				DIO_SetPinValue(PORT_f,PIN_f,HIGH);
				DIO_SetPinValue(PORT_g,PIN_g,HIGH);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 5 :
				DIO_SetPinValue(PORT_a,PIN_a,HIGH);
				DIO_SetPinValue(PORT_b,PIN_b,LOW);
				DIO_SetPinValue(PORT_c,PIN_c,HIGH);
				DIO_SetPinValue(PORT_d,PIN_d,HIGH);
				DIO_SetPinValue(PORT_e,PIN_e,LOW);
				DIO_SetPinValue(PORT_f,PIN_f,HIGH);
				DIO_SetPinValue(PORT_g,PIN_g,HIGH);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 6 :
				DIO_SetPinValue(PORT_a,PIN_a,HIGH);
				DIO_SetPinValue(PORT_b,PIN_b,LOW);
				DIO_SetPinValue(PORT_c,PIN_c,HIGH);
				DIO_SetPinValue(PORT_d,PIN_d,HIGH);
				DIO_SetPinValue(PORT_e,PIN_e,HIGH);
				DIO_SetPinValue(PORT_f,PIN_f,HIGH);
				DIO_SetPinValue(PORT_g,PIN_g,HIGH);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 7 :
				DIO_SetPinValue(PORT_a,PIN_a,HIGH);
				DIO_SetPinValue(PORT_b,PIN_b,HIGH);
				DIO_SetPinValue(PORT_c,PIN_c,HIGH);
				DIO_SetPinValue(PORT_d,PIN_d,LOW);
				DIO_SetPinValue(PORT_e,PIN_e,LOW);
				DIO_SetPinValue(PORT_f,PIN_f,LOW);
				DIO_SetPinValue(PORT_g,PIN_g,LOW);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 8 :
				DIO_SetPinValue(PORT_a,PIN_a,HIGH);
				DIO_SetPinValue(PORT_b,PIN_b,HIGH);
				DIO_SetPinValue(PORT_c,PIN_c,HIGH);
				DIO_SetPinValue(PORT_d,PIN_d,HIGH);
				DIO_SetPinValue(PORT_e,PIN_e,HIGH);
				DIO_SetPinValue(PORT_f,PIN_f,HIGH);
				DIO_SetPinValue(PORT_g,PIN_g,HIGH);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 9 :
				DIO_SetPinValue(PORT_a,PIN_a,HIGH);
				DIO_SetPinValue(PORT_b,PIN_b,HIGH);
				DIO_SetPinValue(PORT_c,PIN_c,HIGH);
				DIO_SetPinValue(PORT_d,PIN_d,HIGH);
				DIO_SetPinValue(PORT_e,PIN_e,LOW);
				DIO_SetPinValue(PORT_f,PIN_f,HIGH);
				DIO_SetPinValue(PORT_g,PIN_g,HIGH);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 10 ://A
				DIO_SetPinValue(PORT_a,PIN_a,HIGH);
				DIO_SetPinValue(PORT_b,PIN_b,HIGH);
				DIO_SetPinValue(PORT_c,PIN_c,HIGH);
				DIO_SetPinValue(PORT_d,PIN_d,LOW);
			    DIO_SetPinValue(PORT_e,PIN_e,HIGH);
				DIO_SetPinValue(PORT_f,PIN_f,HIGH);
				DIO_SetPinValue(PORT_g,PIN_g,HIGH);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 11 ://B
				DIO_SetPinValue(PORT_a,PIN_a,LOW);
				DIO_SetPinValue(PORT_b,PIN_b,LOW);
				DIO_SetPinValue(PORT_c,PIN_c,HIGH);
				DIO_SetPinValue(PORT_d,PIN_d,HIGH);
				DIO_SetPinValue(PORT_e,PIN_e,HIGH);
				DIO_SetPinValue(PORT_f,PIN_f,HIGH);
				DIO_SetPinValue(PORT_g,PIN_g,HIGH);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 12 ://C
				DIO_SetPinValue(PORT_a,PIN_a,HIGH);
				DIO_SetPinValue(PORT_b,PIN_b,LOW);
				DIO_SetPinValue(PORT_c,PIN_c,LOW);
				DIO_SetPinValue(PORT_d,PIN_d,HIGH);
				DIO_SetPinValue(PORT_e,PIN_e,HIGH);
				DIO_SetPinValue(PORT_f,PIN_f,HIGH);
				DIO_SetPinValue(PORT_g,PIN_g,LOW);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 13 ://D
				DIO_SetPinValue(PORT_a,PIN_a,LOW);
				DIO_SetPinValue(PORT_b,PIN_b,HIGH);
				DIO_SetPinValue(PORT_c,PIN_c,HIGH);
				DIO_SetPinValue(PORT_d,PIN_d,HIGH);
				DIO_SetPinValue(PORT_e,PIN_e,HIGH);
				DIO_SetPinValue(PORT_f,PIN_f,LOW);
				DIO_SetPinValue(PORT_g,PIN_g,HIGH);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 14 ://E
				DIO_SetPinValue(PORT_a,PIN_a,HIGH);
				DIO_SetPinValue(PORT_b,PIN_b,LOW);
				DIO_SetPinValue(PORT_c,PIN_c,LOW);
				DIO_SetPinValue(PORT_d,PIN_d,HIGH);
				DIO_SetPinValue(PORT_e,PIN_e,HIGH);
				DIO_SetPinValue(PORT_f,PIN_f,HIGH);
				DIO_SetPinValue(PORT_g,PIN_g,HIGH);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 15 ://F
				DIO_SetPinValue(PORT_a,PIN_a,HIGH);
				DIO_SetPinValue(PORT_b,PIN_b,LOW);
				DIO_SetPinValue(PORT_c,PIN_c,LOW);
				DIO_SetPinValue(PORT_d,PIN_d,LOW);
				DIO_SetPinValue(PORT_e,PIN_e,HIGH);
				DIO_SetPinValue(PORT_f,PIN_f,HIGH);
				DIO_SetPinValue(PORT_g,PIN_g,HIGH);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			case 100:
				DIO_SetPinValue(PORT_a,PIN_a,LOW);
				DIO_SetPinValue(PORT_b,PIN_b,LOW);
				DIO_SetPinValue(PORT_c,PIN_c,LOW);
				DIO_SetPinValue(PORT_d,PIN_d,LOW);
				DIO_SetPinValue(PORT_e,PIN_e,LOW);
				DIO_SetPinValue(PORT_f,PIN_f,LOW);
				DIO_SetPinValue(PORT_g,PIN_g,LOW);
				DIO_SetPinValue(PORT_dp,PIN_dp,LOW);
				break;
			default :
				counter = 100;
				break;
			}
}

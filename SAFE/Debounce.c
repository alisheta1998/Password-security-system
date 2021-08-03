/*
 * Debounce.c
 *
 *  Created on: Oct 5, 2019
 *      Author: hello
 */

#include "Std_types.h"
#include "Registers.h"
#include <util/delay.h>
#include "Bit_Operations.h"
#include "DIO.h"
#include "SevenSeg.h"
#include "Keypad.h"
#include "Interrupt.h"
#include "Debounce.h"

static U8 State = RELEASED ;
static U16 Count = 0 ;

U8 KeyPressed()
{
	U8 RetVal = RELEASED  ;

	U16 Period = 200 ;

	switch(State){
		case RELEASED:
			if(DIO_GetPinValue(Button) == LOW)
			{
				State = PREPRESSED;
			}
			break;
		case PRESSED:
			if(DIO_GetPinValue(Button) == HIGH)
			{
				State = PRERELEASED;
			}
			break;
		case PREPRESSED :
			while(Count < Period && DIO_GetPinValue(Button) == LOW)
			{
				Count++;
			}
			if(Count == Period)
			{
				RetVal = LOW;
				State = PRESSED;
			}
			else
			{
				RetVal = HIGH;
				State = RELEASED;
			}
			Count = 0;
			break;
		case PRERELEASED :
			while( (Count < Period) && (DIO_GetPinValue(Button) == HIGH))
			{
				Count++;
			}
			if(Count == Period)
			{
				RetVal = HIGH;
				State = RELEASED;
			}
			else
			{
				RetVal = LOW;
				State = PRESSED;
			}
			Count = 0;
			break;
		default:

			break;
		}

	return RetVal ;
}

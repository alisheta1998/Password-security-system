/*
 * Servo.c
 *
 *  Created on: Oct 18, 2019
 *      Author: hello
 */
#include "Std_types.h"
#include "Registers.h"
#include <util/delay.h>
#include "Bit_Operations.h"
#include "DIO.h"
#include "Interrupt.h"
#include "Timer.h"
#include "LCD.h"
#include "Servo.h"
#include "ADC.h"

void Servo_Init(void)
{
	DIO_SetPinDirection(Servo_Port,Servo_Pin,OUTPUT);
}

void Servo_SetAngle(U8 Angle)
{

}

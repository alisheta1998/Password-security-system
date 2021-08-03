/*
 * LCD.c
 *
 *  Created on: Sep 7, 2019
 *      Author: hello
 */

#include <util/delay.h>
#include "Std_types.h"
#include "Bit_Operations.h"
#include "Registers.h"
#include "DIO.h"
#include "LCD.h"


void LCD_Init(void)
{
	char Welcome[20] = {"Hello World"};

	DIO_SetPortDirection(PORT2,0xFF);
	DIO_SetPinDirection(RS_PORT,RS_PIN,OUTPUT);
	DIO_SetPinDirection(RW_PORT,RW_PIN,OUTPUT);
	DIO_SetPinDirection(En_PORT,En_PIN,OUTPUT);

	LCD_SendCommand(Double);
	LCD_SendCommand(DisplayOn);
	LCD_SendCommand(Reset_Cursor);
	LCD_SendCommand(CLEAR);
	LCD_SendCommand(EntryModeSet);
	LCD_PrintString(Welcome);
	_delay_ms(1000);
	LCD_SendCommand(CLEAR);
	LCD_SendCommand(Reset_Cursor);

}

void LCD_SendCommand (U8 Command)
{
	DIO_SetPinValue(RS_PORT,RS_PIN,LOW);
	DIO_SetPinValue(RW_PORT,RS_PIN,LOW);
	_delay_ms(20);
	DIO_SetPinValue(En_PORT,En_PIN,HIGH);
	_delay_ms(20);
	DIO_SetPortValue(Data_Port,Command);
	_delay_ms(20);
	DIO_SetPinValue(En_PORT,En_PIN,LOW);
	_delay_ms(20);
}

void LCD_MoveCursor (U8 x , U8 y)
{
	LCD_SendCommand(Reset_Cursor);
	U8 i=0 ;

	if(y==0)
	{
		for(i=0;i<x;i++ )
		{
			LCD_SendCommand(Shift_Right);
		}
		/*
		switch(x)
		{
		case 0 :
			break;
		case 1 :
			break;
		case 2 :
			break;
		case 3 :
			break;
		case 4 :
			break;
		case 5 :
			break;
		case 6 :
			break;

		}
		*/

	}
	else if (y==1)
	{
		LCD_SendCommand(Second_Line);
		for(i=0;i<x;i++)
		{
			LCD_SendCommand(Shift_Right);
		}
	}
	else
	{

	}
}

void LCD_SendData (char Char)
{
	DIO_SetPinValue(RS_PORT,RS_PIN,HIGH);
	DIO_SetPinValue(RW_PORT,RW_PIN,LOW);
	_delay_ms(20);
	DIO_SetPinValue(En_PORT,En_PIN,HIGH);
	_delay_ms(20);
	DIO_SetPortValue(Data_Port,Char);
	_delay_ms(20);
	DIO_SetPinValue(En_PORT,En_PIN,LOW);
	_delay_ms(20);

}
void LCD_PrintString(char *String)
{
	int i=0 ;
	while(String[i]!= '\0')
	{
		LCD_SendData(String[i]);
		i++;
	}
}
void LCD_PrintNumber(int number){
	char string[16] = {0};
	short int i = 0;
	char flag = 0;
	if(number == 0){
		LCD_SendData('0');
		return;
	}
	else if(number < 0){
		number = number * -1;
		flag = 1;
	}

	while(number > 0){
		string[i] = (number%10) + '0';
		number = number / 10;
		i++;
	}

	i--;
	if(flag == 1) LCD_SendData('-');
	while(i >= 0){
		LCD_SendData(string[i]);
		i--;
	}
}

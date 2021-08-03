
/*
 * Safe.c
 *
 *  Created on: Feb 14, 2020
 *      Author: hello
 */
#include "Std_types.h"
#include "Registers.h"
#include "Bit_Operations.h"
#include "DIO.h"
#include "Timer.h"
#include "Servo.h"
#include "LCD.h"
#include "Interrupt.h"
#include "Keypad.h"
#include "Safe.h"
#include <string.h>


/*
 * KEYPAD MAPPING
 *
 *
 * 1			2	3			ENTER
 * 4			5	6			LOCK
 * 7			8	9			Backspace
 * RESERVED		0	RESERVED	CLEAR
 *
 * 0	1	2	3
 * 4	5	6	7
 * 8	9	10	11
 * 12	13	14	15
 *
 * */

/*Some Un handelled Corner Cases :
 * 1. entering more than 16 character
 * 2. Showing written password
 * 3.
 *
 * */


static U8 State = FIRST_TIME ;

//Arrays to save the keypad inputs
static U8 Password[16]=		{"FFFFFFFFFFFFFFFF"};
static U8 Pass_config[16]=	{"FFFFFFFFFFFFFFFF"};
static U8 Temp_Pass[16]=	{"FFFFFFFFFFFFFFFF"};

//Flags to Control the Flow of the code
static U8 Pass_Flag ;
static U8 Pass_Config_Falg ;
static U8 Pass_config_Flag1;
static U8 Temp_Flag ;
static U8 Temp_Flag1;
static U8 Unlock_Flag ;

//Variable Counters used through the code
static U8 Counter1 ;



void Safe_Init(void)
{
	//Setting the Timer ISR Callback Function
	TIM0_SetISR(Safe_Operation);
}

void Safe_Operation(void)
{
	int i ;
	switch(State){
		case FIRST_TIME:
			//Initializing the safe password
			LCD_PrintString("Enter new password :");
			LCD_SendCommand(Second_Line);
			//Entering the password for the first time on the safe
			if (Pass_Flag != 1)
			{
				Pass_Flag = Get_String(Password);
			}
			//After first entry a Confirmation is required
			else if (Pass_Config_Falg != 1)
			{
				if(Pass_config_Flag1 == 0)
				{
					//LCD Setup
					LCD_SendCommand(CLEAR);
					LCD_SendCommand(Reset_Cursor);
					LCD_PrintString("Re-Enter the password :");
					LCD_SendCommand(Second_Line);
					Pass_config_Flag1 = 1 ;
				}
				else
				{
					//Do Nothing
				}
				Pass_Config_Falg = Get_String(Pass_config);
			}
			//After Confirmation entry check the two entries are equal
			else if (Pass_Config_Falg == 1)
			{
				//check if pass = confirm
				if(strcmp(Password,Pass_config) != 0)
				{
					State = LOCKED ;
				}
				else
				{
					LCD_SendCommand(CLEAR);
					LCD_SendCommand(Reset_Cursor);
					LCD_PrintString("Passwords dont match          ");
					LCD_SendCommand(CLEAR);
					LCD_SendCommand(Reset_Cursor);
					//Reseting
					for(i=0;i<16;i++)
					{
						Pass_config[i]='F';
					}
					Counter1 = 0 ;
					Pass_Config_Falg=0;
					Pass_config_Flag1=0;
				}

			}
			else
			{
				//Do Nothing
			}

			break;
		case LOCKED:

			if (Temp_Flag !=1)
			{
				if(Temp_Flag1 == 0)
				{
					//LCD Setup
					LCD_SendCommand(CLEAR);
					LCD_SendCommand(Reset_Cursor);
					LCD_PrintString("Enter the password : ");
					LCD_SendCommand(Second_Line);
					Temp_Flag1 = 1 ;
				}
				else
				{

				}
				Temp_Flag = Get_String(Temp_Pass);
			}
			else if (Temp_Flag == 1)
			{
				//Password Entered
				//Checking Entered Password with saved Pass
				if (strcmp(Temp_Pass,Password) != 0)//Equal
				{
					State = UNLOCKED ;
				}
				else								//In case of incorrect input
				{
					LCD_SendCommand(CLEAR);
					LCD_SendCommand(Reset_Cursor);
					LCD_PrintString("WRONG PASSWORD            ");
					LCD_SendCommand(CLEAR);
					LCD_SendCommand(Reset_Cursor);
					//Reseting variables for re-enter
					for(i=0;i<16;i++)
					{
						Temp_Pass[i]='F';
					}
					Counter1 = 0 ;
					Temp_Flag = 0 ;
					Temp_Flag1 = 0 ;
				}

			}
			else
			{
				//Do Nothing
			}
			break;
		case UNLOCKED :
			if(Unlock_Flag == 0)
			{
				//LCD Update
				LCD_SendCommand(CLEAR);
				LCD_SendCommand(Reset_Cursor);
				LCD_PrintString("UNLOCKED");
				Unlock_Flag =1;
			}
			else
			{

			}
			if(Keypad_Scan()==7)
			{
				State = LOCKED ;
			}
			else
			{
				//Do Nothing
			}
			break;
		default:
			//Do Nothing
			break;
		}


}

U8 Get_String(U8 * str)
{
	/*
	 * This is a function used mainly for LCD Representation and Data Storage and interfacing the keypad commands
	 * The inputs is an array of characters
	 * it returns 0 if the current array is not finished
	 * and returns 1 if the entry is finished
	 * */
	U8 RetVal ;
	U8 i ;							//Counter
	//Entering and Saving The str
	if(Keypad_Scan() == 0)
	{
		str[Counter1]='1';
		LCD_SendData('*') ;
		Counter1++;
	}
	else if (Keypad_Scan() == 1)
	{
		str[Counter1]='2';
		LCD_SendData('*') ;
		Counter1++;
	}
	else if (Keypad_Scan() == 2)
	{
		str[Counter1]='3';
		LCD_SendData('*') ;
		Counter1++;
	}
	else if (Keypad_Scan() == 3)	//Enter
	{
		//This Button indicates the end of an entry , reset counter and change  RetVal for State Changing
		Counter1 = 0 ;
		RetVal = 1;
	}
	else if (Keypad_Scan() == 4)
	{
		str[Counter1]='4';
		LCD_SendData('*') ;
		Counter1++;
	}
	else if (Keypad_Scan() == 5)
	{
		str[Counter1]='5';
		LCD_SendData('*') ;
		Counter1++;
	}
	else if (Keypad_Scan() == 6)
	{
		str[Counter1]='6';
		LCD_SendData('*') ;
		Counter1++;
	}
	else if (Keypad_Scan() == 7)	//LOCK
	{
		//this button is only functional in the UNLOCKED state to Lock the Safe
		if(State == FIRST_TIME)
		{
			//Do Nothing
		}
		else
		{
			State = LOCKED ;
		}
	}
	else if (Keypad_Scan() == 8)
	{
		str[Counter1]='7';
		LCD_SendData('*') ;
		Counter1++;
	}
	else if (Keypad_Scan() == 9)
	{
		str[Counter1]='8';
		LCD_SendData('*') ;
		Counter1++;
	}
	else if (Keypad_Scan() == 10)
	{
		str[Counter1]='9';
		LCD_SendData('*') ;
		Counter1++;
	}
	else if (Keypad_Scan() == 11)	//Backspace (Reduce Counter Then Reprint the screen Depending on the Mode)
	{
		if(strcmp(str,"FFFFFFFFFFFFFFFF") !=0) //str Empty
		{
			//Do Nothing
		}
		else
		{
			Counter1--;
			str[Counter1]='F';
			//LCD Update
			if (Pass_Flag != 1)
			{
				LCD_PrintString("Enter new password :");
				LCD_SendCommand(Second_Line);
				for(i=0 ; i<Counter1 ; i++)
				{
					LCD_SendData('*');
				}
			}
			else if (Pass_Config_Falg != 1)
			{
				LCD_SendCommand(CLEAR);
				LCD_SendCommand(Reset_Cursor);
				LCD_PrintString("Re-Enter the password :");
				LCD_SendCommand(Second_Line);

				for(i=0 ; i<Counter1 ; i++)
				{
					LCD_SendData('*');
				}
			}
			else if (State == LOCKED)
			{
				LCD_SendCommand(CLEAR);
				LCD_SendCommand(Reset_Cursor);
				LCD_PrintString("Enter the password :");
				LCD_SendCommand(Second_Line);

				for(i=0 ; i<Counter1 ; i++)
				{
					LCD_SendData('*');
				}

			}
			else
			{
				//Do Nothing
			}

		}

	}
	else if (Keypad_Scan() == 12)	//CLEAR
	{
		if(strcmp(str,"FFFFFFFFFFFFFFFF") !=0) //str Empty
		{
			//Do Nothing
		}
		else
		{
			Counter1 =0;
			if (Pass_Flag != 1)
			{
				LCD_PrintString("Enter new password :");
				LCD_SendCommand(Second_Line);
			}
			else if (Pass_Config_Falg != 1)
			{
				LCD_SendCommand(CLEAR);
				LCD_SendCommand(Reset_Cursor);
				LCD_PrintString("Re-Enter the password :");
				LCD_SendCommand(Second_Line);
			}
			else if (State == LOCKED)
			{
				LCD_SendCommand(CLEAR);
				LCD_SendCommand(Reset_Cursor);
				LCD_PrintString("Enter the password :");
				LCD_SendCommand(Second_Line);

			}
			else
			{
				//Do Nothing
			}

		}
		for(i=0 ; i<16;i++)
		{
			str[i]='F';
		}
	}
	else if (Keypad_Scan() == 13)
	{
		str[Counter1]='0';
		LCD_SendData('*') ;
		Counter1++;
	}
	else if (Keypad_Scan() == 14)	//Button 5
	{

	}
	else if (Keypad_Scan() == 15)	//Button 6
	{

	}
	else
	{

	}
	return RetVal;
}

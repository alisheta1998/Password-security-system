/*
 * LCD.h
 *
 *  Created on: Sep 7, 2019
 *      Author: hello
 */

/*	RS_PORT ... RW_PORT .... En_PORT ===>>> PORT0 | PORT1 | PORT2 | PORT3
 *  RS/RW/En_PIN ==>   PIN0=>7
 *
 *
 * */

#ifndef LCD_H_
#define LCD_H_
/*		CONFIGURATION			*/

#define UNINIT -100

#define Data_Port 	PORT2

#define RS_PORT 	PORT1
#define RS_PIN		PIN7

#define RW_PORT		PORT1
#define RW_PIN		PIN6

#define En_PORT 	PORT1
#define En_PIN		PIN5

/*COMMANDS*/

#define CLEAR 			0x01
#define Reset_Cursor	0x03
#define Move_Cursor		0x4F
#define Double			0x3B
#define DisplayOn		0x0E
#define EntryModeSet	0x06
#define Shift_Left
#define Shift_Right		0x1F
#define Second_Line		0x80

/*LCD RTOS Finite state machine */

#define available 	0
#define RS_RW		1
#define Enable		2
#define Data		3
#define Disable		4

void LCD_Init(void) ;
void LCD_SendCommand (U8 Command);
void LCD_MoveCursor (U8 x , U8 y);
void LCD_SendData (char Char);
void LCD_PrintString(char *String);
void LCD_PrintNumber(int Number);

int numLength (int n) ;

/*RTOS LCD*/
void LCD_mainfunction(void);

#endif /* LCD_H_ */

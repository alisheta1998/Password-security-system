/*
* Keypad.h
*
*  Created on: Sep 6, 2019
*      Author: hello
*/

#ifndef KEYPAD_H_
#define KEYPAD_H_


/*
 * ITS DECIDED THAT THE ROWS are OUTPUT WHILE THE COLOUMS ARE INPUT
 *
 * */

/*
 * 			3	2	1	0
 * 			7	6	5	4
 * 			11	10	9	8
 * 			15	14	13	12
 *
 *
 *			0	1	2	3
 *			4	5	6	7
 *			8	9	10	11
 *			12	13	14	15
 * */
#define UNINIT -100

#define R1_PORT PORT3
#define R2_PORT PORT3
#define R3_PORT PORT3
#define R4_PORT PORT3

#define C1_PORT PORT3
#define C2_PORT PORT3
#define C3_PORT PORT3
#define C4_PORT PORT3

#define R1_PIN PIN0
#define R2_PIN PIN1
#define R3_PIN PIN2
#define R4_PIN PIN3

#define C1_PIN PIN4
#define C2_PIN PIN5
#define C3_PIN PIN6
#define C4_PIN PIN7



void Keypad_Init(void);
U8 Keypad_Scan(void);// Return 0 to 15  or 100 if no scan



#endif /* KEYPAD_H_ */

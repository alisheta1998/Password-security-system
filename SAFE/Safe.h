/*
 * Safe.h
 *
 *  Created on: Feb 14, 2020
 *      Author: hello
 */

#ifndef SAFE_H_
#define SAFE_H_

#define FIRST_TIME	0
#define LOCKED 	 	1
#define UNLOCKED 	2



void Safe_Init(void);
void Safe_Operation(void);
U8 Get_String(U8 * str) ;

#endif /* SAFE_H_ */



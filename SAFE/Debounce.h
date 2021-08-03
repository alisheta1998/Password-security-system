/*
 * Debounce.h
 *
 *  Created on: Oct 4, 2019
 *      Author: hello
 */

#ifndef DEBOUNCE_H_
#define DEBOUNCE_H_

#define INT_0 PORT3,PIN2
#define INT_1 PORT3,PIN3
#define INT_3 PORT1,PIN2

#define Button PORT3,PIN7

/*STATES*/
#define RELEASED		0
#define PREPRESSED		1
#define PRESSED			2
#define PRERELEASED		3


U8 KeyPressed() ;

#endif /* DEBOUNCE_H_ */

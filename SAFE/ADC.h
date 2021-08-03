/*
 * ADC.h
 *
 *  Created on: Oct 5, 2019
 *      Author: hello
 */


#ifndef ADC_H_
#define ADC_H_
/* MODE => Single ... Free ... Ext_Int*/

#define Single_Polling 		0
#define Free_Running 		1
#define Ext_int 			2

#define ADC_Mode Single_Polling

/* The choose a target sampling frequency */
/*NOTE : The ADC Cannot operate except if The AVR frequency is 1MHz  */
/*Available Frequencies (62.5KHz...125KHz...250KHz)*/
/*Its Recommended to operate on (50-200KHz) for Maximum resolution*/
#define Freq_62		0
#define Freq_125	1
#define Freq_250	2

#define ADC_Freq 	Freq_125

/*Choose either VCC or 2.56V*/
#define VCC 5
#define Ext_Ref 0
#define Ref_Volt VCC

/* 8_bit 10_bit*/
#define bit_8 	0
#define bit_10 	1

#define Size bit_8

/*Check way .... Interrupt .... Bullying*/
#define Interrupt 	0
#define Pollying 	1

#define Check_Method Interrupt


void ADC_Init();

/* Possible inputs for ADC_Read PIN0--PIN7 */
#if Size == bit_8
U8 ADC_Read(U8 Pin_Number);
U8 ADC_Getter(void);
#endif
#if Size == bit_10
U16 ADC_Read(U8 Pin_Number);
U16 ADC_Getter(void);
#endif


#endif /* ADC_H_ */

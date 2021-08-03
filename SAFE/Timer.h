/*
 * Timer.h
 *
 *  Created on: Oct 11, 2019
 *      Author: hello
 */

#ifndef TIMER_H_
#define TIMER_H_
/*ITS RECOMMENDED TO UNIFY THE SOURCE FRREQUENCY FOR ALL DRIVERS WORKING WITH CLK*/
/*Available operating frequencies for this device:
 * Category(1). For (1MHz  clk --> 3.9KHz  - 0.5KHz)
 * Category(2). For (16MHz clk --> 62.5KHz - 7.8KHz)
 * */
/*Its no Recommended to change the frequencies from diffrent Categories */
#define Normal	0
#define CTC		1
#define Timer0_Mode Normal
#define Timer1_Mode Normal
#define Timer2_Mode Normal

#define No_Prescaler 0
#define Prescaler_8  1
#define Frequency Prescaler_8

void TIM0_Init (void);
void TIM0_Start(void);
void TIM0_Stop (void);
void TIM0_SetISR(void (*ptr0) (void));

void TIM1_Init (void);
void TIM1_Start(void);
void TIM1_Stop (void);
void TIM1_SetISR(void (*ptr1) (void));

void TIM2_Init (void);
void TIM2_Start(void);
void TIM2_Stop (void);
void TIM2_SetISR(void (*ptr2) (void));






void PWM0_Init(void);
void PWM0_DC(U8 Duty_Cycle);

void PWM1_Init(void);
void PWM1_DC(U8 Duty_Cycle);

void PWM2_Init(void);
void PWM2_DC(U8 Duty_Cycle);


#endif /* TIMER_H_ */

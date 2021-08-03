
/*
 *THE CURRENT INT File is for practice put it needs adjustments
 *
 * */

#ifndef INTERRUPT_H_
#define INTERRUPT_H_

/*INTERUPT*/
#define Fall 	0
#define Rise 	1
#define Level 	2

#define INT0_Mode Fall
#define INT1_Mode Fall
#define INT2_Mode Fall


void EXTINT0_SETISR(void (*ptr0) (void));
void EXTINT0_Init (void);

void EXTINT1_SETISR(void (*ptr1) (void));
void EXTINT1_Init (void);

void EXTINT2_SETISR(void (*ptr2) (void));
void EXTINT2_Init (void);


#endif /* INTERRUPT_H_ */

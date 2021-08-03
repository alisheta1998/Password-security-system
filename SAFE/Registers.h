/*
 * Registers.h
 *
 *  Created on: Aug 30, 2019
 *      Author: hello
 */

#ifndef REGISTERS_H_
#define REGISTERS_H_
/*BASIC REGISTERS*/

#define PORTA (*(volatile U8*)0x3B)
#define DDRA  (*(volatile U8*)0x3A)
#define PINA  (*(volatile U8*)0x39)

#define PORTB (*(volatile U8*)0x38)
#define DDRB  (*(volatile U8*)0x37)
#define PINB  (*(volatile U8*)0x36)

#define PORTC (*(volatile U8*)0x35)
#define DDRC  (*(volatile U8*)0x34)
#define PINC  (*(volatile U8*)0x33)

#define PORTD (*(volatile U8*)0x32)
#define DDRD  (*(volatile U8*)0x31)
#define PIND  (*(volatile U8*)0x30)

/*Special Function I/O Register*/
#define SFIOR (*(volatile U8*)0x50)

/*Interrupt*/
#define SREG 	(*(volatile U8*)0x5F)		// ALL INT ENABLE
#define MCUCR 	(*(volatile U8*)0x55) 		// INT(0-1) Trigger Control 	(Rising-Falling-Low level-Any logical change)
#define MCUCSR	(*(volatile U8*)0x54)		// INT(2) 	Trigger Control Bit(6) HIGH=>Rising Edge ... LOW=>Falling Edge

#define GICR 	(*(volatile U8*)0x5B)
#define GIFR 	(*(volatile U8*)0x5A)

/*ADC : Analog to Digital Converter*/
#define ADMUX	(*(volatile U8*)0x27)
#define ADCSRA	(*(volatile U8*)0x26)
#define ADCH	(*(volatile U8*)0x25)
#define ADCL	(*(volatile U8*)0x24)

/*Timer/Counter Control Registers*/
#define TCCR0	(*(volatile U8*)0x53)
#define TCNT0	(*(volatile U8*)0x52)
#define OCR0	(*(volatile U8*)0x5C)
#define TIMSK 	(*(volatile U8*)0x59)
#define TIFR 	(*(volatile U8*)0x58)

#define TCCR1A	(*(volatile U8*)0x4F)
#define TCCR1B	(*(volatile U8*)0x4E)
#define TCNT1H	(*(volatile U8*)0x4D)
#define TCNT1L	(*(volatile U8*)0x4C)
#define OCR1AH	(*(volatile U8*)0x4B)
#define OCR1AL	(*(volatile U8*)0x4A)
#define OCR1BH	(*(volatile U8*)0x49)
#define OCR1BL	(*(volatile U8*)0x48)
#define ICR1H 	(*(volatile U8*)0x47)
#define ICR1L 	(*(volatile U8*)0x46)

#define TCCR2	(*(volatile U8*)0x45)
#define TCNT2	(*(volatile U8*)0x44)
#define OCR2	(*(volatile U8*)0x43)
#define ASSR	(*(volatile U8*)0x42)


#endif /* REGISTERS_H_ */

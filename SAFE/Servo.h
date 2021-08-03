/*
 * Servo.h
 *
 *  Created on: Oct 18, 2019
 *      Author: hello
 */

#ifndef SERVO_H_
#define SERVO_H_

/*The servo must be connected to 3 pins in the same port with no intermidiate pins */

#define Servo_Port PORT1
/*The first pin and the 2 after are by default +1 +2*/
#define Servo_Pin  PIN3

void Servo_Init(void);
void Servo_SetAngle(U8 Angle);


#endif /* SERVO_H_ */

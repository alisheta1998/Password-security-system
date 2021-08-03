#include "Std_types.h"
#include "Registers.h"
#include <util/delay.h>
#include "Bit_Operations.h"
#include "DIO.h"
#include "Timer.h"
#include "Servo.h"
#include "LCD.h"
#include "Interrupt.h"
#include "Keypad.h"
#include "Safe.h"

/*
 * 1. Code ---- Function
 * 2. Create task ------ create instant
 * 3. Createtask(instant);
 *
 *
 * Buffer : 1. TASK
 * 			2. Array
 * 			3. #define MaxnTasks 20
 * TASK SystemTasks[MaxnTasks];
 *
 *
 * U8 CreateTask (TASK *ptr)
 * {
 * 		SystemTaks[ priority ] = ptr
 * 		ptr->priority
 * }
 *
 *
 *void RTOS_Scheduler (void)
 * {
 * if(OSENABLE == True )
 * {
 * 	for(i=0 ; i++ ; i<MaxnTask)
 * 	{
 * 		if(SystemTask[i] -> offset == 0)
 * 		{
 * 			SystemTask[i]->Task handler();
 * 			SystemTask[i]->offset =SystemTask[i]->periodicity;
 *
 * 		}
 * 		SystemTask[i]->offset--;
 * 	}
 *
 * }
 * }
 *
 *
 * */




int main(void)
{
	/*
	 *INITIALIZE SAFE SOFTWARE
	  */
	LCD_Init();
	Keypad_Init();
	TIM0_Init();
	Safe_Init();


	return 0 ;
}


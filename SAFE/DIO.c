/*
 * SetPinDirection 		DONE
 * SetPinPullUp			DONE
 * SetPinValue 			DONE
 * GetPinValue			DONE
 *
 *
 */


#include "Std_types.h"
#include "Bit_Operations.h"
#include "Registers.h"
#include "DIO.h"

void DIO_SetPinDirection (U8 Port_number , U8 Pin_number ,U8 Direction)
{
	switch(Port_number)
	{
	case PORT0 :
		switch(Pin_number)
		{
		case PIN0 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRA,PIN0);
			}
			else
			{
				CLRBIT(DDRA,PIN0);
			}
			break;
		case PIN1 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRA,PIN1);
			}
			else
			{
				CLRBIT(DDRA,PIN1);
			}
			break;
		case PIN2 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRA,PIN2);
			}
			else
			{
				CLRBIT(DDRA,PIN2);
			}
			break;
		case PIN3 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRA,PIN3);
			}
			else
			{
				CLRBIT(DDRA,PIN3);
			}
			break;
		case PIN4 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRA,PIN4);
			}
			else
			{
				CLRBIT(DDRA,PIN4);
			}
			break;
		case PIN5 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRA,PIN5);
			}
			else
			{
				CLRBIT(DDRA,PIN5);
			}
			break;
		case PIN6 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRA,PIN6);
			}
			else
			{
				CLRBIT(DDRA,PIN6);
			}
			break;
		case PIN7 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRA,PIN7);
			}
			else
			{
				CLRBIT(DDRA,PIN7);
			}
			break;
		}
		break;
	case PORT1 :
		switch(Pin_number)
		{
		case PIN0 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRB,PIN0);
			}
			else
			{
				CLRBIT(DDRB,PIN0);
			}
			break;
		case PIN1 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRB,PIN1);
			}
			else
			{
				CLRBIT(DDRB,PIN1);
			}
			break;
		case PIN2 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRB,PIN2);
			}
			else
			{
				CLRBIT(DDRB,PIN2);
			}
			break;
		case PIN3 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRB,PIN3);
			}
			else
			{
				CLRBIT(DDRB,PIN3);
			}
			break;
		case PIN4 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRB,PIN4);
			}
			else
			{
				CLRBIT(DDRB,PIN4);
			}
			break;
		case PIN5 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRB,PIN5);
			}
			else
			{
				CLRBIT(DDRB,PIN5);
			}
			break;
		case PIN6 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRB,PIN6);
			}
			else
			{
				CLRBIT(DDRB,PIN6);
			}
			break;
		case PIN7 :
			if (Direction == OUTPUT)
			{
				SETBIT(DDRB,PIN7);
			}
			else
			{
				CLRBIT(DDRB,PIN7);
			}
			break;
		default :
			break;
				}
			break;
	case PORT2 :
		switch(Pin_number)
				{
				case PIN0 :
					if (Direction == OUTPUT)
					{
						SETBIT(DDRC,PIN0);
					}
					else
					{
						CLRBIT(DDRC,PIN0);
					}
					break;
				case PIN1 :
					if (Direction == OUTPUT)
					{
						SETBIT(DDRC,PIN1);
					}
					else
					{
						CLRBIT(DDRC,PIN1);
					}
					break;
				case PIN2 :
					if (Direction == OUTPUT)
					{
						SETBIT(DDRC,PIN2);
					}
					else
					{
						CLRBIT(DDRC,PIN2);
					}
					break;
				case PIN3 :
					if (Direction == OUTPUT)
					{
						SETBIT(DDRC,PIN3);
					}
					else
					{
						CLRBIT(DDRC,PIN3);
					}
					break;
				case PIN4 :
					if (Direction == OUTPUT)
					{
						SETBIT(DDRC,PIN4);
					}
					else
					{
						CLRBIT(DDRC,PIN4);
					}
					break;
				case PIN5 :
					if (Direction == OUTPUT)
					{
						SETBIT(DDRC,PIN5);
					}
					else
					{
						CLRBIT(DDRC,PIN5);
					}
					break;
				case PIN6 :
					if (Direction == OUTPUT)
					{
						SETBIT(DDRC,PIN6);
					}
					else
					{
						CLRBIT(DDRC,PIN6);
					}
					break;
				case PIN7 :
					if (Direction == OUTPUT)
					{
						SETBIT(DDRC,PIN7);
					}
					else
					{
						CLRBIT(DDRC,PIN7);
					}
					break;
				default :
					break;
				}
				break;
	case PORT3 :
		switch(Pin_number)
		{
			case PIN0 :
				if (Direction == OUTPUT)
				{
					SETBIT(DDRD,PIN0);
				}
				else
				{
					CLRBIT(DDRD,PIN0);
				}
				break;
			case PIN1 :
				if (Direction == OUTPUT)
				{
					SETBIT(DDRD,PIN1);
				}
				else
				{
					CLRBIT(DDRD,PIN1);
				}
				break;
			case PIN2 :
				if (Direction == OUTPUT)
				{
					SETBIT(DDRD,PIN2);
				}
				else
				{
					CLRBIT(DDRD,PIN2);
				}
				break;
			case PIN3 :
				if (Direction == OUTPUT)
				{
					SETBIT(DDRD,PIN3);
				}
				else
				{
					CLRBIT(DDRD,PIN3);
				}
				break;
			case PIN4 :
				if (Direction == OUTPUT)
				{
					SETBIT(DDRD,PIN4);
				}
				else
				{
					CLRBIT(DDRD,PIN4);
				}
				break;
			case PIN5 :
				if (Direction == OUTPUT)
				{
					SETBIT(DDRD,PIN5);
				}
				else
				{
					CLRBIT(DDRD,PIN5);
				}
				break;
			case PIN6 :
				if (Direction == OUTPUT)
				{
					SETBIT(DDRD,PIN6);
				}
				else
				{
					CLRBIT(DDRD,PIN6);
				}
				break;
			case PIN7 :
				if (Direction == OUTPUT)
				{
					SETBIT(DDRD,PIN7);
				}
				else
				{
					CLRBIT(DDRD,PIN7);
				}
				break;
			default :
				break;
		}
		break;
	break;
	}
}
void DIO_SetPinPullUp    (U8 Port_number , U8 Pin_number)
{
	switch(Port_number)
	{
	case PORT0 :
		switch(Pin_number)
		{
		case PIN0 :
			SETBIT(PORTA,PIN0);
			break;
		case PIN1 :
			SETBIT(PORTA,PIN1);
					break;
		case PIN2 :
			SETBIT(PORTA,PIN2);
			break;
		case PIN3 :
			SETBIT(PORTA,PIN3);
			break;
		case PIN4 :
			SETBIT(PORTA,PIN4);
			break;
		case PIN5 :
			SETBIT(PORTA,PIN5);
			break;
		case PIN6 :
			SETBIT(PORTA,PIN6);
			break;
		case PIN7 :
			SETBIT(PORTA,PIN7);
			break;
		}
		break;
	case PORT1 :
		switch(Pin_number)
				{
				case PIN0 :
					SETBIT(PORTB,PIN0);
					break;
				case PIN1 :
					SETBIT(PORTB,PIN1);
							break;
				case PIN2 :
					SETBIT(PORTB,PIN2);
					break;
				case PIN3 :
					SETBIT(PORTB,PIN3);
					break;
				case PIN4 :
					SETBIT(PORTB,PIN4);
					break;
				case PIN5 :
					SETBIT(PORTB,PIN5);
					break;
				case PIN6 :
					SETBIT(PORTB,PIN6);
					break;
				case PIN7 :
					SETBIT(PORTB,PIN7);
					break;
				}
		break;
	case PORT2 :
		switch(Pin_number)
				{
				case PIN0 :
					SETBIT(PORTC,PIN0);
					break;
				case PIN1 :
					SETBIT(PORTC,PIN1);
							break;
				case PIN2 :
					SETBIT(PORTC,PIN2);
					break;
				case PIN3 :
					SETBIT(PORTC,PIN3);
					break;
				case PIN4 :
					SETBIT(PORTC,PIN4);
					break;
				case PIN5 :
					SETBIT(PORTC,PIN5);
					break;
				case PIN6 :
					SETBIT(PORTC,PIN6);
					break;
				case PIN7 :
					SETBIT(PORTC,PIN7);
					break;
				}
		break;
	case PORT3 :
		switch(Pin_number)
		{
		case PIN0 :
			SETBIT(PORTD,PIN0);
			break;
		case PIN1 :
			SETBIT(PORTD,PIN1);
			break;
		case PIN2 :
			SETBIT(PORTD,PIN2);
			break;
		case PIN3 :
			SETBIT(PORTD,PIN3);
			break;
		case PIN4 :
			SETBIT(PORTD,PIN4);
			break;
		case PIN5 :
			SETBIT(PORTD,PIN5);
			break;
		case PIN6 :
			SETBIT(PORTD,PIN6);
			break;
		case PIN7 :
			SETBIT(PORTD,PIN7);
			break;
		}
		break;
	}
}
void DIO_SetPinValue 	 (U8 Port_number , U8 Pin_number,U8 Value)
{
	switch(Port_number)
	{
	case PORT0 :
		switch(Pin_number)
		{
		case PIN0 :
			if(Value == 0)
			{
				CLRBIT(PORTA,PIN0);
			}
			else
			{
				SETBIT(PORTA,PIN0);
			}
			break;
		case PIN1 :
			if(Value == 0)
				{
					CLRBIT(PORTA,PIN1);
				}
				else
				{
					SETBIT(PORTA,PIN1);
				}
			break;
		case PIN2 :
			if(Value == 0)
				{
					CLRBIT(PORTA,PIN2);
				}
				else
				{
					SETBIT(PORTA,PIN2);
				}
				break;
		case PIN3 :
			if(Value == 0)
				{
					CLRBIT(PORTA,PIN3);
				}
				else
				{
				SETBIT(PORTA,PIN3);
				}
				break;
		case PIN4 :
			if(Value == 0)
				{
					CLRBIT(PORTA,PIN4);
				}
				else
				{
					SETBIT(PORTA,PIN4);
				}
				break;
		case PIN5 :
			if(Value == 0)
						{
							CLRBIT(PORTA,PIN5);
						}
						else
						{
							SETBIT(PORTA,PIN5);
						}
					break;
		case PIN6 :
			if(Value == 0)
						{
							CLRBIT(PORTA,PIN6);
						}
						else
						{
							SETBIT(PORTA,PIN6);
						}
					break;
		case PIN7 :
			if(Value == 0)
						{
							CLRBIT(PORTA,PIN7);
						}
						else
						{
							SETBIT(PORTA,PIN7);
						}
					break;

		}
		break;
	case PORT1 :
		switch(Pin_number)
				{
				case PIN0 :
					if(Value == 0)
					{
						CLRBIT(PORTB,PIN0);
					}
					else
					{
						SETBIT(PORTB,PIN0);
					}
					break;
				case PIN1 :
					if(Value == 0)
						{
							CLRBIT(PORTB,PIN1);
						}
						else
						{
							SETBIT(PORTB,PIN1);
						}
					break;
				case PIN2 :
					if(Value == 0)
						{
							CLRBIT(PORTB,PIN2);
						}
						else
						{
							SETBIT(PORTB,PIN2);
						}
						break;
				case PIN3 :
					if(Value == 0)
						{
							CLRBIT(PORTB,PIN3);
						}
						else
						{
						SETBIT(PORTB,PIN3);
						}
						break;
				case PIN4 :
					if(Value == 0)
						{
							CLRBIT(PORTB,PIN4);
						}
						else
						{
							SETBIT(PORTB,PIN4);
						}
						break;
				case PIN5 :
					if(Value == 0)
								{
									CLRBIT(PORTB,PIN5);
								}
								else
								{
									SETBIT(PORTB,PIN5);
								}
							break;
				case PIN6 :
					if(Value == 0)
								{
									CLRBIT(PORTB,PIN6);
								}
								else
								{
									SETBIT(PORTB,PIN6);
								}
							break;
				case PIN7 :
					if(Value == 0)
								{
									CLRBIT(PORTB,PIN7);
								}
								else
								{
									SETBIT(PORTB,PIN7);
								}
							break;

				}
		break;
	case PORT2 :
		switch(Pin_number)
				{
				case PIN0 :
					if(Value == 0)
					{
						CLRBIT(PORTC,PIN0);
					}
					else
					{
						SETBIT(PORTC,PIN0);
					}
					break;
				case PIN1 :
					if(Value == 0)
						{
							CLRBIT(PORTC,PIN1);
						}
						else
						{
							SETBIT(PORTC,PIN1);
						}
					break;
				case PIN2 :
					if(Value == 0)
						{
							CLRBIT(PORTC,PIN2);
						}
						else
						{
							SETBIT(PORTC,PIN2);
						}
						break;
				case PIN3 :
					if(Value == 0)
						{
							CLRBIT(PORTC,PIN3);
						}
						else
						{
						SETBIT(PORTC,PIN3);
						}
						break;
				case PIN4 :
					if(Value == 0)
						{
							CLRBIT(PORTC,PIN4);
						}
						else
						{
							SETBIT(PORTC,PIN4);
						}
						break;
				case PIN5 :
					if(Value == 0)
								{
									CLRBIT(PORTC,PIN5);
								}
								else
								{
									SETBIT(PORTC,PIN5);
								}
							break;
				case PIN6 :
					if(Value == 0)
								{
									CLRBIT(PORTC,PIN6);
								}
								else
								{
									SETBIT(PORTC,PIN6);
								}
							break;
				case PIN7 :
					if(Value == 0)
								{
									CLRBIT(PORTC,PIN7);
								}
								else
								{
									SETBIT(PORTC,PIN7);
								}
							break;

				}
		break;
	case PORT3 :
		switch(Pin_number)
				{
				case PIN0 :
					if(Value == 0)
					{
						CLRBIT(PORTD,PIN0);
					}
					else
					{
						SETBIT(PORTD,PIN0);
					}
					break;
				case PIN1 :
					if(Value == 0)
						{
							CLRBIT(PORTD,PIN1);
						}
						else
						{
							SETBIT(PORTD,PIN1);
						}
					break;
				case PIN2 :
					if(Value == 0)
						{
							CLRBIT(PORTD,PIN2);
						}
						else
						{
							SETBIT(PORTD,PIN2);
						}
						break;
				case PIN3 :
					if(Value == 0)
						{
							CLRBIT(PORTD,PIN3);
						}
						else
						{
						SETBIT(PORTD,PIN3);
						}
						break;
				case PIN4 :
					if(Value == 0)
						{
							CLRBIT(PORTD,PIN4);
						}
						else
						{
							SETBIT(PORTD,PIN4);
						}
						break;
				case PIN5 :
					if(Value == 0)
								{
									CLRBIT(PORTD,PIN5);
								}
								else
								{
									SETBIT(PORTD,PIN5);
								}
							break;
				case PIN6 :
					if(Value == 0)
								{
									CLRBIT(PORTD,PIN6);
								}
								else
								{
									SETBIT(PORTD,PIN6);
								}
							break;
				case PIN7 :
					if(Value == 0)
								{
									CLRBIT(PORTD,PIN7);
								}
								else
								{
									SETBIT(PORTD,PIN7);
								}
							break;

				}
		break;
	}
}
U8 DIO_GetPinValue(U8 Port_Number, U8 Pin_Number){
	U8 RetVal;
	switch(Port_Number){
	case PORT0:
		RetVal = GETBIT(PINA,Pin_Number);
		break;
	case PORT1:
		RetVal = GETBIT(PINB,Pin_Number);
		break;
	case PORT2:
		RetVal = GETBIT(PINC,Pin_Number);
		break;
	case PORT3:
		RetVal = GETBIT(PIND,Pin_Number);
		break;
	}
	return RetVal;
}

void DIO_TogglePin		 (U8 Port_number , U8 Pin_number)
{
	static U8 State = 0;

	switch(Port_number)
	{
	case PORT0 :
		switch(Pin_number)
		{
		case PIN0 :
			if(State == 0)
			{
				CLRBIT(PORTA,PIN0);
				State = 1 ;
			}
			else
			{
				SETBIT(PORTA,PIN0);
				State = 0 ;
			}
			break;
		case PIN1 :
			if(State == 0)
				{
					CLRBIT(PORTA,PIN1);
					State = 1 ;
				}
				else
				{
					SETBIT(PORTA,PIN1);
					State = 0 ;
				}
			break;
		case PIN2 :
			if(State == 0)
				{
					CLRBIT(PORTA,PIN2);
					State = 1 ;
				}
				else
				{
					SETBIT(PORTA,PIN2);
					State = 0 ;
				}
				break;
		case PIN3 :
			if(State == 0)
				{
					CLRBIT(PORTA,PIN3);
					State = 1 ;
				}
				else
				{
					SETBIT(PORTA,PIN3);
					State = 0 ;
				}
				break;
		case PIN4 :
			if(State == 0)
				{
					CLRBIT(PORTA,PIN4);
					State = 1 ;
				}
				else
				{
					SETBIT(PORTA,PIN4);
					State = 0 ;
				}
				break;
		case PIN5 :
			if(State == 0)
						{
							CLRBIT(PORTA,PIN5);
							State = 1 ;
						}
						else
						{
							SETBIT(PORTA,PIN5);
							State = 0 ;
						}
					break;
		case PIN6 :
			if(State == 0)
						{
							CLRBIT(PORTA,PIN6);
							State = 1 ;
						}
						else
						{
							SETBIT(PORTA,PIN6);
							State = 0 ;
						}
					break;
		case PIN7 :
			if(State == 0)
						{
							CLRBIT(PORTA,PIN7);
							State = 1 ;
						}
						else
						{
							SETBIT(PORTA,PIN7);
							State = 0 ;
						}
					break;

		}
		break;
	case PORT1 :
		switch(Pin_number)
				{
				case PIN0 :
					if(State == 0)
					{
						CLRBIT(PORTB,PIN0);
						State = 1 ;
					}
					else
					{
						SETBIT(PORTB,PIN0);
						State = 0 ;
					}
					break;
				case PIN1 :
					if(State == 0)
						{
							CLRBIT(PORTB,PIN1);
							State = 1 ;
						}
						else
						{
							SETBIT(PORTB,PIN1);
							State = 0 ;
						}
					break;
				case PIN2 :
					if(State == 0)
						{
							CLRBIT(PORTB,PIN2);
							State = 1 ;
						}
						else
						{
							SETBIT(PORTB,PIN2);
							State = 0 ;
						}
						break;
				case PIN3 :
					if(State == 0)
						{
							CLRBIT(PORTB,PIN3);
							State = 1 ;
						}
						else
						{
						SETBIT(PORTB,PIN3);
						State = 0 ;
						}
						break;
				case PIN4 :
					if(State == 0)
						{
							CLRBIT(PORTB,PIN4);
							State = 1 ;
						}
						else
						{
							SETBIT(PORTB,PIN4);
							State = 0 ;
						}
						break;
				case PIN5 :
					if(State == 0)
								{
									CLRBIT(PORTB,PIN5);
									State = 1 ;
								}
								else
								{
									SETBIT(PORTB,PIN5);
									State = 0 ;
								}
							break;
				case PIN6 :
					if(State == 0)
								{
									CLRBIT(PORTB,PIN6);
									State = 1 ;
								}
								else
								{
									SETBIT(PORTB,PIN6);
									State = 0 ;
								}
							break;
				case PIN7 :
					if(State == 0)
								{
									CLRBIT(PORTB,PIN7);
									State = 1 ;
								}
								else
								{
									SETBIT(PORTB,PIN7);
									State = 0 ;
								}
							break;

				}
		break;
	case PORT2 :
		switch(Pin_number)
				{
				case PIN0 :
					if(State == 0)
					{
						CLRBIT(PORTC,PIN0);
						State = 1 ;
					}
					else
					{
						SETBIT(PORTC,PIN0);
						State = 0 ;
					}
					break;
				case PIN1 :
					if(State == 0)
						{
							CLRBIT(PORTC,PIN1);
							State = 1 ;
						}
						else
						{
							SETBIT(PORTC,PIN1);
							State = 0 ;
						}
					break;
				case PIN2 :
					if(State == 0)
						{
							CLRBIT(PORTC,PIN2);
							State = 1 ;
						}
						else
						{
							SETBIT(PORTC,PIN2);
							State = 0 ;
						}
						break;
				case PIN3 :
					if(State == 0)
						{
							CLRBIT(PORTC,PIN3);
							State = 1 ;
						}
						else
						{
							SETBIT(PORTC,PIN3);
							State = 0 ;
						}
						break;
				case PIN4 :
					if(State == 0)
						{
							CLRBIT(PORTC,PIN4);
							State = 1 ;
						}
						else
						{
							SETBIT(PORTC,PIN4);
							State = 0 ;
						}
						break;
				case PIN5 :
					if(State == 0)
								{
									CLRBIT(PORTC,PIN5);
									State = 1 ;
								}
								else
								{
									SETBIT(PORTC,PIN5);
									State = 0 ;
								}
							break;
				case PIN6 :
					if(State == 0)
								{
									CLRBIT(PORTC,PIN6);
									State = 1 ;
								}
								else
								{
									SETBIT(PORTC,PIN6);
									State = 0 ;
								}
							break;
				case PIN7 :
					if(State == 0)
								{
									CLRBIT(PORTC,PIN7);
									State = 1 ;
								}
								else
								{
									SETBIT(PORTC,PIN7);
									State = 0 ;
								}
							break;

				}
		break;
	case PORT3 :
		switch(Pin_number)
				{
				case PIN0 :
					if(State == 0)
					{
						CLRBIT(PORTD,PIN0);
						State = 1 ;
					}
					else
					{
						SETBIT(PORTD,PIN0);
						State = 0 ;
					}
					break;
				case PIN1 :
					if(State == 0)
						{
							CLRBIT(PORTD,PIN1);
							State = 1 ;
						}
						else
						{
							SETBIT(PORTD,PIN1);
							State = 0 ;
						}
					break;
				case PIN2 :
					if(State == 0)
						{
							CLRBIT(PORTD,PIN2);
							State = 1 ;
						}
						else
						{
							SETBIT(PORTD,PIN2);
							State = 0 ;
						}
						break;
				case PIN3 :
					if(State == 0)
						{
							CLRBIT(PORTD,PIN3);
							State = 1 ;
						}
						else
						{
						SETBIT(PORTD,PIN3);
						State = 0 ;
						}
						break;
				case PIN4 :
					if(State == 0)
						{
							CLRBIT(PORTD,PIN4);
							State = 1 ;
						}
						else
						{
							SETBIT(PORTD,PIN4);
							State = 0 ;
						}
						break;
				case PIN5 :
					if(State == 0)
								{
									CLRBIT(PORTD,PIN5);
									State = 1 ;
								}
								else
								{
									SETBIT(PORTD,PIN5);
									State = 0 ;
								}
							break;
				case PIN6 :
					if(State == 0)
								{
									CLRBIT(PORTD,PIN6);
									State = 1 ;
								}
								else
								{
									SETBIT(PORTD,PIN6);
									State = 0 ;
								}
							break;
				case PIN7 :
					if(State == 0)
					{
						CLRBIT(PORTD,PIN7);
						State = 1 ;
					}
					else
					{
						SETBIT(PORTD,PIN7);
						State = 0 ;
					}
					break;
				}
		break;
	}
}
void DIO_SetPortDirection	 (U8 Port_number ,U8 Direction)
{
	switch(Port_number)
	{
		case PORT0 :
			DDRA = Direction;
			break;
		case PORT1 :
			DDRB = Direction;
			break;
		case PORT2 :
			DDRC = Direction;
			break;
		case PORT3 :
			DDRD = Direction;
			break;
		default :
			break;
	}
}
void DIO_SetPortValue		 (U8 Port_number ,U8 Value)
{
	switch(Port_number)
	{
		case PORT0 :
			PORTA = Value ;
			break;
		case PORT1 :
			PORTB = Value ;
			break;
		case PORT2 :
			PORTC = Value ;
			break;
		case PORT3 :
			PORTD = Value ;
			break;
		default :
			break;
	}
}

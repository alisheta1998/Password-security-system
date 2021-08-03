/*
 * ADC.c
 *
 *  Created on: Oct 5, 2019
 *      Author: hello
 */
#include "Std_types.h"
#include "Bit_Operations.h"
#include "Registers.h"
#include "ADC.h"
#include "DIO.h"


/*Global Variable*/
#if Size == bit_10
static U16 ADC_Value = 0;

#elif Size == bit_8
static U8 ADC_Value = 0;
#endif

/**/
void ADC_Init()
{
	/*Set the ADC ON*/
	SETBIT(ADCSRA,7);		//ADEN(ADC Enable) on

	/*Set ADC Frequency*/
	switch (ADC_Freq)
	{
	case Freq_62 :			//Prescaler
		SETBIT(ADCSRA,0);
		SETBIT(ADCSRA,1);
		CLRBIT(ADCSRA,2);
		break;
	case Freq_125 :
		CLRBIT(ADCSRA,0);
		SETBIT(ADCSRA,1);
		CLRBIT(ADCSRA,2);
		break;
	case Freq_250 :			//Can ONLY be used on the bit_8 mode
		SETBIT(ADCSRA,0);
		CLRBIT(ADCSRA,1);
		CLRBIT(ADCSRA,2);
		break;
	default :
		break;
	}

	/*MODE SELECT*/
	switch (ADC_Mode)
	{
	case Single_Polling :
		CLRBIT(ADCSRA,5);		//ADATE(Auto Triggering Enable) OFF
		break;
	case Free_Running :
		SETBIT(ADCSRA,5);		//ADATE(Auto Triggering Enable) ON

		CLRBIT(SFIOR,5);
		CLRBIT(SFIOR,6);
		CLRBIT(SFIOR,7);
		break;
	case Ext_int :
		SETBIT(ADCSRA,5);		//ADATE(Auto Triggering Enable) ON

		CLRBIT(SFIOR,5);
		SETBIT(SFIOR,6);
		CLRBIT(SFIOR,7);

		SETBIT(ADCSRA,3);		//ADIE(ADC Interrupt Enable) ON
		break;
	default :
		break;
	}

	/*Reference*/
	switch(Ref_Volt)
	{
	case VCC :
		SETBIT(ADMUX,6);
		CLRBIT(ADMUX,7);
		break;
	case Ext_Ref:
		SETBIT(ADMUX,6);
		SETBIT(ADMUX,7);
		break;
	default :
		break;
	}

	/*SIZE*/
	switch(Size)
	{
	case bit_8 :
		SETBIT(ADMUX,5); 	// ADLAR Left adjust result
		break;
	case bit_10 :
		CLRBIT(ADMUX,5);
		break;
	default :
		break;
	}

}
/**************************************************************************************/

#if Size == bit_8
U8 ADC_Read(U8 Pin_Number)
{
	U8 RetVal ;

	/*Set the Reading BIT*/
	switch (Pin_Number)
	{
	case PIN0 :
		CLRBIT(ADMUX,0);
		CLRBIT(ADMUX,1);
		CLRBIT(ADMUX,2);
		CLRBIT(ADMUX,3);
		CLRBIT(ADMUX,4);
		break;
	case PIN1 :
		SETBIT(ADMUX,0);
		CLRBIT(ADMUX,1);
		CLRBIT(ADMUX,2);
		CLRBIT(ADMUX,3);
		CLRBIT(ADMUX,4);
		break;
	case PIN2 :
		CLRBIT(ADMUX,0);
		SETBIT(ADMUX,1);
		CLRBIT(ADMUX,2);
		CLRBIT(ADMUX,3);
		CLRBIT(ADMUX,4);
		break;
	case PIN3 :
		SETBIT(ADMUX,0);
		SETBIT(ADMUX,1);
		CLRBIT(ADMUX,2);
		CLRBIT(ADMUX,3);
		CLRBIT(ADMUX,4);
		break;
	case PIN4 :
		CLRBIT(ADMUX,0);
		CLRBIT(ADMUX,1);
		SETBIT(ADMUX,2);
		CLRBIT(ADMUX,3);
		CLRBIT(ADMUX,4);
		break;
	case PIN5 :
		SETBIT(ADMUX,0);
		CLRBIT(ADMUX,1);
		SETBIT(ADMUX,2);
		CLRBIT(ADMUX,3);
		CLRBIT(ADMUX,4);
		break;
	case PIN6 :
		CLRBIT(ADMUX,0);
		SETBIT(ADMUX,1);
		SETBIT(ADMUX,2);
		CLRBIT(ADMUX,3);
		CLRBIT(ADMUX,4);
		break;
	case PIN7 :
		SETBIT(ADMUX,0);
		SETBIT(ADMUX,1);
		SETBIT(ADMUX,2);
		CLRBIT(ADMUX,3);
		CLRBIT(ADMUX,4);
		break;
	default :
		break;
	}

	SETBIT(ADCSRA,6); //ADSC (Start Conversion)
	while(GETBIT(ADCSRA,6) == (U8)1)
	{

	}

	/*Reading the ADC Value*/
	RetVal = ADCH ;
	return RetVal ;
}
U8 ADC_Getter(void)
{
	U8 RetVal ;
	RetVal = ADC_Value ;
	return RetVal ;
}
#elif Size == bit_10
U16 ADC_Read(U8 Pin_Number)
{
	U16 RetVal ;
	/*Set the Reading BIT*/
		switch (Pin_Number)
		{
		case PIN0 :
			CLRBIT(ADMUX,0);
			CLRBIT(ADMUX,1);
			CLRBIT(ADMUX,2);
			CLRBIT(ADMUX,3);
			CLRBIT(ADMUX,4);
			break;
		case PIN1 :
			SETBIT(ADMUX,0);
			CLRBIT(ADMUX,1);
			CLRBIT(ADMUX,2);
			CLRBIT(ADMUX,3);
			CLRBIT(ADMUX,4);
			break;
		case PIN2 :
			CLRBIT(ADMUX,0);
			SETBIT(ADMUX,1);
			CLRBIT(ADMUX,2);
			CLRBIT(ADMUX,3);
			CLRBIT(ADMUX,4);
			break;
		case PIN3 :
			SETBIT(ADMUX,0);
			SETBIT(ADMUX,1);
			CLRBIT(ADMUX,2);
			CLRBIT(ADMUX,3);
			CLRBIT(ADMUX,4);
			break;
		case PIN4 :
			CLRBIT(ADMUX,0);
			CLRBIT(ADMUX,1);
			SETBIT(ADMUX,2);
			CLRBIT(ADMUX,3);
			CLRBIT(ADMUX,4);
			break;
		case PIN5 :
			SETBIT(ADMUX,0);
			CLRBIT(ADMUX,1);
			SETBIT(ADMUX,2);
			CLRBIT(ADMUX,3);
			CLRBIT(ADMUX,4);
			break;
		case PIN6 :
			CLRBIT(ADMUX,0);
			SETBIT(ADMUX,1);
			SETBIT(ADMUX,2);
			CLRBIT(ADMUX,3);
			CLRBIT(ADMUX,4);
			break;
		case PIN7 :
			SETBIT(ADMUX,0);
			SETBIT(ADMUX,1);
			SETBIT(ADMUX,2);
			CLRBIT(ADMUX,3);
			CLRBIT(ADMUX,4);
			break;
		default :
			break;
		}
		switch (ADC_Mode)
		{
		case Single_Polling :
			SETBIT(ADCSRA,6); //ADSC (Start Conversion)
			while(GETBIT(ADCSRA,6) == (U8)1)
			{

			}

			/*Reading the ADC Value*/
			RetVal = ADCL ;
			RetVal = RetVal | (((U16)ADCH)<<8);
			break;
		case Free_Running :
			break;
		case Ext_int :
			break;
		default :
			break;
		}
	return RetVal;
}
U16 ADC_Getter(void)
{
	U16 RetVal ;
	RetVal = ADC_Value ;
	return RetVal;
}
#endif


/*
 * interrupts.c
 *
 * Created: 19-May-21 6:54:06 PM
 *  Author: Dell
 */ 
#include "Interrupts.h"
ptr_to_Fun INT0_external_interrupt;//1
ptr_to_Fun INT1_external_interrupt;//2
ptr_to_Fun TIMER1CAPT;//3
ptr_to_Fun TIMER1COMPA;//4

ptr_to_Fun TIMER1OVF;//5
ptr_to_Fun TIMER0OVF;//6
ptr_to_Fun USART0_RX;//=UartRecieveInterrupt;
ptr_to_Fun USART0_UDRE;//8
ptr_to_Fun USART0_TX;//=UartTransmitInterrupt;
ptr_to_Fun ANALOG_COMP;//10
ptr_to_Fun PIN_CHANGE; //11
ptr_to_Fun TIMER1COMPB;//12
ptr_to_Fun TIMER0COMPA;//13
ptr_to_Fun TIMER0COMPB;//14
ptr_to_Fun USI_START;//15
ptr_to_Fun USI_OVF;//16
ptr_to_Fun EE_RDY;//17
ptr_to_Fun WDT_OVF;//18



void G_interrupt_Enable(void)
{
	SREG |=(0x80);
}


void EX_interrupt_enable1(void)
{
	CLEAR_BIT(PORTD_DIR,3);
	SET_BIT(PORTD_DATA,3);
	SET_BIT(GIMSK,INT1);
	SET_BIT(MCUCR,2);/*Any logical change*/
	CLEAR_BIT(MCUCR,3);
}
void EX_interrupt_enable0(void)
{
	CLEAR_BIT(PORTD_DIR,2);
	SET_BIT(PORTD_DATA,2);
	SET_BIT(GIMSK,INT0);
	SET_BIT(MCUCR,0);/*Any logical change*/
	CLEAR_BIT(MCUCR,1);
	
}
void G_interrupt_Disable(void)
{
	CLEAR_BIT(SREG,7);
}
void __vector_1(void) __attribute__((signal));
void __vector_1(void)
{
	INT0_external_interrupt();
}


void __vector_2(void) __attribute__((signal));
void __vector_2(void)
{
	INT1_external_interrupt();
}


void __vector_3(void) __attribute__((signal));
void __vector_3(void)
{
	TIMER1CAPT();
}


void __vector_4(void) __attribute__((signal));
void __vector_4(void)
{
	TIMER1COMPA();
}


void __vector_5(void) __attribute__((signal));
void __vector_5(void)
{
	TIMER1OVF();
}

void __vector_6(void) __attribute__((signal));
void __vector_6(void)
{
	TIMER0OVF();
}

void __vector_7(void) __attribute__((signal));
void __vector_7(void)
{
	USART0_RX();
}

void __vector_8(void) __attribute__((signal));
void __vector_8(void)
{
	USART0_UDRE();
}

void __vector_9(void) __attribute__((signal));
void __vector_9(void)
{
	USART0_TX();	
}

void __vector_10(void) __attribute__((signal));
void __vector_10(void)
{
ANALOG_COMP();
	
}

void __vector_11(void) __attribute__((signal));
void __vector_11(void)
{
PIN_CHANGE();

}

void __vector_12(void) __attribute__((signal));
void __vector_12(void)
{
	TIMER1COMPB();
}

void __vector_13(void) __attribute__((signal));
void __vector_13(void)
{
	
	TIMER0COMPA();

}

void __vector_14(void) __attribute__((signal));
void __vector_14(void)
{
	TIMER0COMPB();
	
}

void __vector_15(void) __attribute__((signal));
void __vector_15(void)
{
	
	USI_START();
	
}

void __vector_16(void) __attribute__((signal));
void __vector_16(void)
{USI_OVF();
}

void __vector_17(void) __attribute__((signal));
void __vector_17(void)
{
	EE_RDY();

}
void __vector_18(void) __attribute__((signal));
void __vector_18(void)
{
		WDT_OVF();
}
}
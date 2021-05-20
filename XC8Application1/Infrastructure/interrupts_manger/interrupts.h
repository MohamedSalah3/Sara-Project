/*
 * interrupts.h
 *
 * Created: 19-May-21 6:53:59 PM
 *  Author: Dell
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_
#include "../registers.h"
#include "../std_types.h"
extern volatile uint8_t u8Excution_to_be_done;
extern void timer_interrupt(void);
typedef void (*ptr_to_Fun)(void);

extern ptr_to_Fun INT0_external_interrupt;//1
extern ptr_to_Fun INT1_external_interrupt;//2
extern ptr_to_Fun TIMER1CAPT;//3
extern ptr_to_Fun TIMER1COMPA;//4
extern ptr_to_Fun TIMER1OVF;//5
extern ptr_to_Fun TIMER0OVF;//6
extern ptr_to_Fun USART0_RX;//=UartRecieveInterrupt;
extern ptr_to_Fun USART0_UDRE;//8
extern ptr_to_Fun USART0_TX;//=UartTransmitInterrupt;
extern ptr_to_Fun ANALOG_COMP;//10
extern ptr_to_Fun PIN_CHANGE; //11
extern ptr_to_Fun TIMER1COMPB;//12
extern ptr_to_Fun TIMER0COMPA;//13
extern ptr_to_Fun TIMER0COMPB;//14
extern ptr_to_Fun USI_START;//15
extern ptr_to_Fun USI_OVF;//16
extern ptr_to_Fun EE_RDY;//17
extern ptr_to_Fun WDT_OVF;//18


void G_interrupt_Enable(void);
extern void EX_interrupt_enable0(void);
extern void EX_interrupt_enable1(void);
extern void G_interrupt_Disable(void);
extern volatile uint8_t u8_ovf_counter;
#define INT0    6
#define INT1    7



#endif /* INTERRUPTS_H_ */
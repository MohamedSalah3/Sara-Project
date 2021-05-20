/*
 * registers.h
 *
 * Created: 19-May-21 6:53:06 PM
 *  Author: Dell
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "std_types.h"



/*
 * General Registers
 */
#define MCUCR				*((reg_type8_t)(0x55))
#define MCUCSR				*((reg_type8_t)(0x54))
#define GIMSK				*((reg_type8_t)(0x5B))
#define EIFR				*((reg_type8_t)(0X5A))
#define SREG				*((reg_type8_t)(0x5F))
/*
 * PORTx registers
 */

#define PORTA_DATA			*((reg_type8_t)(0X3B))
#define PORTA_DIR			*((reg_type8_t)(0X3A))
#define PORTA_PIN			*((reg_type8_t)(0X39))

#define PORTB_DATA			*((reg_type8_t)(0X38))
#define PORTB_DIR			*((reg_type8_t)(0X37))
#define PORTB_PIN			*((reg_type8_t)(0X36))

#define GPIO_R2			*((reg_type8_t)(0X35))
#define GPIO_R1			*((reg_type8_t)(0X34))
#define GPIO_R0			*((reg_type8_t)(0X33))


#define PORTD_DATA			*((reg_type8_t)(0X32))
#define PORTD_DIR			*((reg_type8_t)(0X31))
#define PORTD_PIN			*((reg_type8_t)(0X30))


/*
 * General Timer registers
 */
#define TIMSK				*((reg_type8_t)(0x59))
#define TIFR				*((reg_type8_t)(0x58))


/*
 * 
 * Timer 0 Registers
 *
 */
#define TCCR0_A				*((reg_type8_t)(0x50))	
#define TCCR0_B				*((reg_type8_t)(0x53))
#define TCNT_0				*((reg_type8_t)(0x52))
#define OCR0_B				*((reg_type8_t)(0x5C))

#define TOV0      0
#define OCF0      1
#define TOV1      2
#define OCF1B     3
#define OCF1A     4
#define ICF1      5
#define TOV2      6
#define OCF2      7
/***************************************************/
/* OCF2 TOV2 ICF1 OCF1A OCF1B TOV1 OCF0 TOV0<<TIFRReg */
/***************************************************/
/*
 * Timer 1 Registers
 */

#define TCCR1A				*((reg_type8_t)(0X4F))
#define TCCR1B				*((reg_type8_t)(0X4E))
#define TCCR1C			    *((reg_type8_t)(0x42))

#define TCNT1H				*((reg_type8_t)(0X4D))
#define TCNT1L				*((reg_type8_t)(0X4C))
#define TCNT1				*((reg_type16_t)(0X4C))

#define OCR1AH				*((reg_type8_t)(0X4B))
#define OCR1AL				*((reg_type8_t)(0x4A))
#define OCR1A				*((reg_type16_t)(0x4A))

#define OCR1BH				*((reg_type8_t)(0X49))
#define OCR1BL				*((reg_type8_t)(0x48))
#define OCR1B				*((reg_type16_t)(0x48))

#define ICR1H				*((reg_type8_t)(0x45))
#define CLKPR				*((reg_type8_t)(0x46))
#define ICR1L				*((reg_type16_t)(0x44))



#define GTCCR				*((reg_type8_t)(0x43))
#define WDTCSR              *((reg_type8_t)(0x41))
#define PCMSK		        *((reg_type8_t)(0x40))
 
#define EEAR                *((reg_type8_t)(0x3E))
#define EEDR				*((reg_type8_t)(0x3E))
#define EECR				*((reg_type8_t)(0x3C))
/*UART*/
#define UDR         *((reg_type8_t)(0x2C))             /*USART IO Data Register 159 $0C*/
#define UCSRA       *((reg_type8_t)(0x2B))
#define UCSRB       *((reg_type8_t)(0x2A))
#define UCSRC       *((reg_type8_t)(0x23))
 /*This Address is chared with UBBRH*/
#define UBRRL       *((reg_type8_t)(0x29))
#define UBRRH		*((reg_type8_t)(0x22))
/*USI*/
#define USIDR		*((reg_type8_t)(0x2F))
#define USISR		*((reg_type8_t)(0x2E))
#define USICR        *((reg_type8_t)(0x2D))
/*ADC*/
#define ACSR		*((reg_type8_t)(0x28))

#define DIDR         *((reg_type8_t)(0x21))
#endif /* REGISTERS_H_ */
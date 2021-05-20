/*
 * Uart_Recieve.h
 *
 * Created: 20-May-21 4:43:52 PM
 *  Author: Dell
 */ 


#ifndef UART_RECIEVE_H_
#define UART_RECIEVE_H_
#include "uart_Recieve_Config.h"
#include "../../../Infrastructure/registers.h"
#include "../../../Infrastructure/std_types.h"
#define SPIE  7
#define TXCIE 6
#define RXCIE 7
extern void Uart_Init(En_BAUD_Rate Baud_rate,En_Stop_config Stop_bits_num,
EN_Parity parity_Bit,EN_Data_Size data_num_bits,EN_UartMode uart_mode);
extern void UartTransmitInterrupt(void);
void UartRecieveInterrupt(void);
extern void UartTransmitPooling(uint8_t Data);
extern uint8_t UartRecievePooling(void);
extern void Enable_communication_interrupt(void);
void Uart_tryansmitfirstbyte(uint8_t data);
extern void Uart_De_Init(void);





#endif /* UART_RECIEVE_H_ */
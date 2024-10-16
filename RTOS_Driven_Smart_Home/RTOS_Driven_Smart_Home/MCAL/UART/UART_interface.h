/*
 * UART_interface.h
 *
 * Created: 9/20/2024 4:36:11 PM
 *  Author: AMIT
 */ 


#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_



void UART_voidInit(void) ; 

void UART_voidTX(u8 copy_u8data) ; 



u8 UART_u8RX(void) ; 

#endif /* UART_INTERFACE_H_ */
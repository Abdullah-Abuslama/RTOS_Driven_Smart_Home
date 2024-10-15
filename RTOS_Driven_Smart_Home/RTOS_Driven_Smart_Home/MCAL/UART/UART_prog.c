/*
 * UART_prog.c
 *
 * Created: 9/20/2024 4:36:38 PM
 *  Author: AMIT
 */ 
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPE.h"
#include "UART_reg.h" 





void UART_voidInit(void){
	
	 u8 temp=0 ;  // 0000000 
	 
	 /* set bit 7 in UCSRC_REG  to used the reg */
	   
	   SET_BIT(temp,7) ; 
	  /*select char size : 8bit */
	  SET_BIT(temp,1) ; 
	  SET_BIT(temp,2) ;
	  UCSRC_REG=temp ; 
	  /* SET baud rate : 9600 */
	  UBRRL_REG=103 ; 
	  
	  /* enable RX , TX */
	  
	  SET_BIT(UCSRB_REG,3) ; // TX 
	  SET_BIT(UCSRB_REG,4) ; // RX
	  
	  
	  
	   
	
}
void UART_voidTX(u8 copy_u8data){
	
	/* SET DATA */
	UDR_REG=copy_u8data ; 
	while(GET_BIT(UCSRA_REG,5)==0) ; 
	
	
}
u8 UART_u8RX(void) {
	
	while(GET_BIT(UCSRA_REG,7)==0) ; 
	
	return UDR_REG ;  // RETURN VALUE 
}
/*
 * GI_prog.c
 *
 * Created: 9/26/2024 5:02:43 PM
 *  Author: AMIT
 */ 
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPE.h"

#include "GI_reg.h"





void GI_voidEnable(void) {
	
	SET_BIT(SREG_REG,L_BIT) ;  //    SREG | =1<<7  --> 
	//__asm("SEI") ; 
}
void GI_voidDisable(void) {
	
	CLR_BIT(SREG_REG,L_BIT) ; 
	//__asm("CLI")
}
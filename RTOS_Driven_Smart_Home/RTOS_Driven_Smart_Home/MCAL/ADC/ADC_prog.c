/*
 * ADC_prog.c
 *
 * Created: 8/31/2024 3:54:13 PM
 *  Author: AMIT
 */ 
#include "../../LIB/BIT_MATH.h" 
#include "../../LIB/STD_TYPE.h" 
#include "ADC_reg.h" 
#include "ADC_interface.h"






void ADC_voidInit(){
	
	/*Reference Selections for ADC : AVCC with external capacitor at AREF pin*/
	 CLR_BIT(ADMUX_REG,7) ; 
	 SET_BIT(ADMUX_REG,6) ; 
	 
	/*select prescaler */
	 
	 ADCSRA_REG&=0b11111000 ; 
	 ADCSRA_REG|=ADC_PRESCALER ; 
	
	
	/* ENABLE ADC */
	
	SET_BIT(ADCSRA_REG,7) ; 
	
}

u16 ADC_u16ReadChannel(u8 copy_u8channel){
	
	  /* select channel */
	  ADMUX_REG &=0b11100000 ; 
	  ADMUX_REG |=copy_u8channel ; 
	  /* start conversion */
	  SET_BIT(ADCSRA_REG,6) ; 
	  
	  while(GET_BIT(ADCSRA_REG,4)==0) ; 
	  
	  SET_BIT(ADCSRA_REG,4) ; // CLR FLAG 
	  
	  return  ADC_REG ; 

}
/*
 * TIMER0_prog.c
 *
 * Created: 9/30/2024 2:09:43 PM
 *  Author: AMIT
 */ 
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPE.h"
#include "TIMER0_reg.h"
#include "TIMER0_interface.h"


void (*TIM0_PTR[2])(void)={null} ;

void TIMER0_voidInit(  u8 copy_u8mode){
	
	
		/* SET PRESCALER */
		
		TCCR0_REG&=0b11111000 ;
		TCCR0_REG|=TIME0_PRESCALER ;
	
	 if (copy_u8mode==OV_MODE)
	 {
		 /*1- select mode : overflow mode */
		 
		 CLR_BIT(TCCR0_REG,3) ;
		 CLR_BIT(TCCR0_REG,6) ;
		 /* enable PIE : overflow interrupt */
		 SET_BIT(TIMSK_REG,0) ;
	 }
	 else if (copy_u8mode==CTC_MODE)
	 {
		 /*1- select mode : CTC */
		 
		 SET_BIT(TCCR0_REG,3) ;
		 CLR_BIT(TCCR0_REG,6) ;
		 /* enable PIE : CTC interrupt */
		 SET_BIT(TIMSK_REG,1) ;
		 
		 OCR0_REG=OCR_VAL ; 
		 
	 }
	
}


void TIMER0_voidSetCallBack(void(*ptr)(void), u8 copy_u8mode){
	
	switch(copy_u8mode){
		
		case OV_MODE  : TIM0_PTR[0]=ptr ; break;
		case CTC_MODE : TIM0_PTR[1]=ptr ; break; 
		
	}
	
}

void TIMER0_voidFastPWM (u8 copy_u8dc) {
	
	/*select mode : fast pwm*/
	SET_BIT(TCCR0_REG, 3);
	SET_BIT(TCCR0_REG, 6);
	
	/*non inverting*/
	SET_BIT(TCCR0_REG, 5);
	CLR_BIT(TCCR0_REG, 4);
	
	/*set prescaler*/
	TCCR0_REG &= 0b11111000 ;
	TCCR0_REG |= TIME0_PRESCALER;
	
	OCR0_REG = copy_u8dc * 2.55 ;
	
}


void __vector_11(void)__attribute__((signal)) ;
void __vector_11(void){
	

	TIM0_PTR[0]() ; 


}

void __vector_10(void)__attribute__((signal)) ;
void __vector_10(void){
	

	TIM0_PTR[1]() ;

}

/*

 tov =1ms  ----> CTC  : 250 
 
 DT =100 MS 
 
 number of overflow = DT /tov = 100 /1=100 


*/
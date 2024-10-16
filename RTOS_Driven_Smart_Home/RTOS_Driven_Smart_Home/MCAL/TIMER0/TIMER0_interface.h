/*
 * TIMER0_interface.h
 *
 * Created: 9/30/2024 2:09:13 PM
 *  Author: AMIT
 */ 


#ifndef TIMER0_INTERFACE_H_
#define TIMER0_INTERFACE_H_



/* TIMER0 PRESCASER */

#define  TIM0_NO_PRESCALER         1 
#define  TIM0_8_PRESCALER          2
#define  TIM0_64_PRESCALER         3 
#define  TIM0_265_PRESCALER        4 
#define  TIM0_1024_PRESCALER       5 


#define  TIME0_PRESCALER    TIM0_64_PRESCALER



void TIMER0_voidInit(  u8 copy_u8mode) ; 
void TIMER0_voidSetCallBack(void(*ptr)(void), u8 copy_u8mode); 

/* TIMER MODE */

#define  OV_MODE    0 
#define  CTC_MODE   1 

/* ocr value */

#define  OCR_VAL   250 
#endif /* TIMER0_INTERFACE_H_ */
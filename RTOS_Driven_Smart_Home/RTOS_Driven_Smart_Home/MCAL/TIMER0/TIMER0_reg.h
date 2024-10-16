/*
 * TIMER0_reg.h
 *
 * Created: 9/30/2024 2:09:28 PM
 *  Author: AMIT
 */ 


#ifndef TIMER0_REG_H_
#define TIMER0_REG_H_


#define  TCCR0_REG        *((volatile u8*)0x53)
#define  OCR0_REG         *((volatile u8*)0x5C)
#define  TIMSK_REG        *((volatile u8*)0x59)
#define  TIFR_REG         *((volatile u8*)0x58)





#endif /* TIMER0_REG_H_ */
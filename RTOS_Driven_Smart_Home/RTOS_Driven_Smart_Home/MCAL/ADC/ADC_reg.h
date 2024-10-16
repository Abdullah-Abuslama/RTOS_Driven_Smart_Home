/*
 * ADC_reg.h
 *
 * Created: 8/31/2024 3:53:57 PM
 *  Author: AMIT
 */ 


#ifndef ADC_REG_H_
#define ADC_REG_H_


#define  ADMUX_REG   *((volatile u8*)0x27)
#define  ADCSRA_REG  *((volatile u8*)0x26)
#define  ADC_REG     *((volatile u16*)0x24) // ADCL + ADCH





#endif /* ADC_REG_H_ */
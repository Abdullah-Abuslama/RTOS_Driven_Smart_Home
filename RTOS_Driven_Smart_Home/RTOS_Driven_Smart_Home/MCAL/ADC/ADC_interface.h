/*
 * ADC_interface.h
 *
 * Created: 8/31/2024 3:53:42 PM
 *  Author: AMIT
 */ 


#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

/* Select prescaler */

#define  ADC_DEVISON_2         1 
#define  ADC_DEVISON_4         2 
#define  ADC_DEVISON_8         3 
#define  ADC_DEVISON_16        4 
#define  ADC_DEVISON_32        5 
#define  ADC_DEVISON_64        6
#define  ADC_DEVISON_128       7 

#define  ADC_PRESCALER     ADC_DEVISON_128 



/* select channel */

#define  ADC_0        0
#define  ADC_1        1
#define  ADC_2        2
#define  ADC_3        3
#define  ADC_4        4
#define  ADC_5        5
#define  ADC_6        6
#define  ADC_7        7





void ADC_voidInit() ; 

u16 ADC_u16ReadChannel(u8 copy_u8channel) ; 



#endif /* ADC_INTERFACE_H_ */
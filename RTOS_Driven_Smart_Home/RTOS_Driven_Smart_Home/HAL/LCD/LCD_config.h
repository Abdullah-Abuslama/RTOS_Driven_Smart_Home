/*
 * LCD_config.h
 *
 * Created: 8/17/2024 2:06:02 PM
 *  Author: AMIT
 */ 


#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_



#if LCD_MODE ==_8_BIT_MODE 

#define  LCD_DPORT    DIO_PORTA

#elif LCD_MODE ==_4_BIT_MODE 

#define  LCD_DPORT    DIO_PORTA
#define  LCD_D4_PIN   DIO_PIN4
#define  LCD_D5_PIN   DIO_PIN5
#define  LCD_D6_PIN   DIO_PIN6
#define  LCD_D7_PIN   DIO_PIN7
#endif 

#define LCD_CPORT    DIO_PORTB

#define LCD_RS_PIN   DIO_PIN0
#define LCD_RW_PIN   DIO_PIN1
#define LCD_EN_PIN   DIO_PIN2






#endif /* LCD_CONFIG_H_ */
/*
 * LCD_interface.h
 *
 * Created: 8/17/2024 2:05:49 PM
 *  Author: AMIT
 */ 


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_


/*LCD  mode */
/* you can select lcd mode */
#define  _4_BIT_MODE     0 
#define  _8_BIT_MODE     1 

#define  LCD_MODE  _4_BIT_MODE


void LCD_voidSendData(u8 copy_u8data) ; 
void LCD_voidSendCommand(u8 copy_u8command) ;
void LCD_voidInit(void) ; 

void LCD_voidSendString(u8*str) ; 


void LCD_voidGotoxy(u8 copy_u8x,u8 copyu8y) ; 


void LCD_voidDrawData(u8 pattern , u8*data , u8 x , u8 y) ; 


void LCD_voidSendNumber(u32 number) ; 
#endif /* LCD_INTERFACE_H_ */
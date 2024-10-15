/*
 * DIO_interface.h
 *
 * Created: 8/10/2024 2:02:57 PM
 *  Author: AMIT
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_





/* PIN DIR */

#define   OUTPUT        1 
#define   INPUT         0 

/*PIN VAL */

#define  HIGH            1 
#define  LOW             0

/* DIO PORTS */

#define  DIO_PORTA       0 
#define  DIO_PORTB       1 
#define  DIO_PORTC       2 
#define  DIO_PORTD       3 


/*PINS */

#define  DIO_PIN0           0
#define  DIO_PIN1           1
#define  DIO_PIN2           2
#define  DIO_PIN3           3
#define  DIO_PIN4           4
#define  DIO_PIN5           5
#define  DIO_PIN6           6
#define  DIO_PIN7           7







/*****************************************************************************
* Function Name: DIO_voidSetPinDir
* Purpose      : set pin dir (OUTPUT , INPUT)
* Parameters   : u8 Copy_u8_port,u8 Copy_u8_pin,u8 Copy_u8_dir
* Return value : void
********************************************************************/
void DIO_voidSetPinDir(u8 copy_u8port, u8 copy_u8pin,u8 copy_u8dir) ;
/*****************************************************************************
* Function Name: DIO_voidSetPinVal
* Purpose      : set pin val (HIGH , LOW)
* Parameters   : u8 copy_u8port, u8 copy_u8pin,u8 copy_u8val
* Return value : void
********************************************************************/

void DIO_voidSetPinVal(u8 copy_u8port, u8 copy_u8pin,u8 copy_u8val) ;
/*****************************************************************************
* Function Name: DIO_voidTogglePinVal
* Purpose      : TOGGLE pin val (HIGH , LOW)
* Parameters   : u8 copy_u8port, u8 copy_u8pin
* Return value : void
********************************************************************/

void DIO_voidTogglePinVal(u8 copy_u8port, u8 copy_u8pin) ; 
/*****************************************************************************
* Function Name: DIO_u8ReadpinVal
* Purpose      :  READ pin val (HIGH , LOW)
* Parameters   : u8 copy_u8port, u8 copy_u8pin
* Return value : U8
********************************************************************/
u8 DIO_u8ReadpinVal(u8 copy_u8port, u8 copy_u8pin) ; 

void DIO_voidSetPortDir(u8 copy_u8port, u8 copy_u8dir) ; 
void DIO_voidSetPortVal(u8 copy_u8port, u8 copy_u8val) ;

 



#endif /* DIO_INTERFACE_H_ */
#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#include "../../01- LIB/STD_TYPES.h"
#include "../../01- LIB/BIT_MATH.h"

/* PORT functions  */
void MDIO_voidSetPortDirection(u8 copy_u8PortId, u8 copy_u8PortDirection);
void MDIO_voidSetPortValue(u8 copy_u8PortId, u8 copy_u8PortValue);

/* PIN functions */
void MDIO_voidSetPinDirection(u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinDirection);
void MDIO_voidSetPinValue(u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinValue);
u8 MDIO_u8GetPinValue(u8 copy_u8PortId, u8 copy_u8PinId);

/* user interface PORTs  */
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

/* user interface port directions */
#define PORT_OUTPUT 0xFF
#define PORT_INPUT 0x00

/* user interface port states  */
#define PORT_HIGH 0xFF
#define PORT_LOW 0x00

/* user interface pin directions */
#define OUTPUT 1
#define INPUT  0

/* user interface pin states  */
#define TOGGLE 2
#define HIGH   1
#define LOW    0

/* user interface Pins */
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

#endif
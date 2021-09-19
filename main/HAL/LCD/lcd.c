/*
 * lcd.c
 *
 *  Created on: Jul 31, 2021
 *      Author: Mohamed Abdulaal
 */
#include "lcd.h"

void lcd_init(){
	Dio_write(RW,Low);
	_delay_ms(20);		// LCD Power ON delay

	lcd_cmd(0x33);
	lcd_cmd(0x32); /* Send for 4 bit initialization of LCD  */
	lcd_cmd(0x28); // Select 4 Bit Mode, 5*7 dots
	lcd_cmd(0x0F);	// Display On, Cursor Blinking
	lcd_cmd(0x06);	// Entry Mode Increment cursor to right
	lcd_cmd(0x01);	// Clear Display

//
//	LCD_Command(0x28);	/* 2 line, 5*7 matrix in 4-bit mode */
//	LCD_Command(0x0c);	/* Display on cursor off */
//	LCD_Command(0x06);	/* Increment cursor (shift cursor to right) */
//	LCD_Command(0x01);	/* Clear display screen */

}

void lcd_cmd(uint8 cmd){
	Dio_write(RS, Low);
	Dio_write(RW, Low);

	if(GET_BIT(cmd,7)){ Dio_write(D7,High);}else{ Dio_write(D7,Low);}
	if(GET_BIT(cmd,6)){ Dio_write(D6,High);}else{ Dio_write(D6,Low);}
	if(GET_BIT(cmd,5)){ Dio_write(D5,High);}else{ Dio_write(D5,Low);}
	if(GET_BIT(cmd,4)){ Dio_write(D4,High);}else{ Dio_write(D4,Low);}
	Dio_write(E,High);
	_delay_us(10);
	Dio_write(E,Low);
	_delay_us(200);

	if(GET_BIT(cmd,3)){ Dio_write(D7,High);}else{ Dio_write(D7,Low);}
	if(GET_BIT(cmd,2)){ Dio_write(D6,High);}else{ Dio_write(D6,Low);}
	if(GET_BIT(cmd,1)){ Dio_write(D5,High);}else{ Dio_write(D5,Low);}
	if(GET_BIT(cmd,0)){ Dio_write(D4,High);}else{ Dio_write(D4,Low);}
	Dio_write(E,High);
	_delay_us(10);
	Dio_write(E,Low);
	_delay_us(200);
}

void lcd_data(uint8 data){
	Dio_write(RS, High);
	Dio_write(RW, Low);

	if(GET_BIT(data,3)){ Dio_write(D7,High);}else{ Dio_write(D7,Low);}
	if(GET_BIT(data,2)){ Dio_write(D6,High);}else{ Dio_write(D6,Low);}
	if(GET_BIT(data,1)){ Dio_write(D5,High);}else{ Dio_write(D5,Low);}
	if(GET_BIT(data,0)){ Dio_write(D4,High);}else{ Dio_write(D4,Low);}
	Dio_write(E,High);
	_delay_us(10);
	Dio_write(E,Low);
	_delay_us(200);

	if(GET_BIT(data,7)){ Dio_write(D7,High);}else{ Dio_write(D7,Low);}
	if(GET_BIT(data,6)){ Dio_write(D6,High);}else{ Dio_write(D6,Low);}
	if(GET_BIT(data,5)){ Dio_write(D5,High);}else{ Dio_write(D5,Low);}
	if(GET_BIT(data,4)){ Dio_write(D4,High);}else{ Dio_write(D4,Low);}

	Dio_write(E,High);
	_delay_us(10);
	Dio_write(E,Low);
	_delay_us(200);
}

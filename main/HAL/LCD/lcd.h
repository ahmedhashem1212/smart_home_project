/*
 * lcd.h
 *
 *  Created on: Jul 31, 2021
 *      Author: Mohamed Abdulaal
 */

#ifndef HAL_LCD_LCD_H_
#define HAL_LCD_LCD_H_

#include "../../STD_Types.h"
#include "../../Bit_Math.h"
#include "../../MCAL/Dio/Dio.h"
#include <util/delay.h>

void lcd_init();
void lcd_cmd(uint8 cmd);
void lcd_data(uint8 data);

#endif /* HAL_LCD_LCD_H_ */

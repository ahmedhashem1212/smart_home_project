/*
 * uart.h
 *
 *  Created on: Sep 18, 2021
 *      Author: DELL
 */

#ifndef HAL_UART_UART_H_
#define HAL_UART_UART_H_


#include <avr/io.h>
#include "../../BIT_MATH.h"
#include "../../STD_Types.h"

void UART_init(unsigned int baud);
void UART_send(unsigned char data);
unsigned char UART_recieve();

#endif /* HAL_UART_UART_H_ */


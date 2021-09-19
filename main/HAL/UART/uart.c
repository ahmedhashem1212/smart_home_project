/*
 * uart.c
 *
 *  Created on: Sep 18, 2021
 *      Author: DELL
 */


#include "uart.h"
void UART_init(unsigned int baud)
{
	/* Set baud rate */
	UBRRH = (unsigned char)(baud>>8);
	UBRRL = (unsigned char)baud;
	/* Enable receiver and transmitter */
	UCSRB = (1<<RXEN)|(1<<TXEN);
	/* Set frame format: 8data, 2stop bit */
	UCSRC = (1<<URSEL)|(1<<USBS)|(3<<UCSZ0);
}
void UART_send(unsigned char data)
{
	while (!(UCSRA&(1<<UDRE)))
	{
	}

	UDR=data;
}
unsigned char UART_recieve()
{
	while (!(UCSRA&(1<<RXC)))
	{
	}
	return UDR;
}

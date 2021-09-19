
#include <avr/io.h>
#include <util/delay.h>
#include "Bit_Math.h"
#include "STD_Types.h"
#include "MCAL/Dio/Dio.h"
#include "MCAL/Dio/Dio_config.h"
#include <stdio.h>
#include <avr/interrupt.h>
#include "HAL/LCD/lcd.h"
#include "MCAL/SPI/master/master.h"
#include "HAL/UART/uart.h"

int main(){
	// call the Dio_init to set the configuration of the registers
	Dio_init();
	// call SPI inint to initialize it as a master
	SPI_MasterInit();
	// call UART inint with baud rate 9600 to receive the command from the blurtooth module
	UART_init(103);
	while(1){
		_delay_ms(10);

		// variable to get the command sent from UART from blutooth module
		unsigned char rec = UART_recieve();
		// send the command to the slave via SPI
		SPI_MasterTransmit(rec);
		_delay_ms(10);

	}

}

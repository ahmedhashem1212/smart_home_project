
#include <avr/io.h>
#include <util/delay.h>
#include "Bit_Math.h"
#include "STD_Types.h"
#include <stdio.h>
#include <avr/interrupt.h>
#include "MCAL/Dio/Dio.h"
#include "MCAL/Dio/Dio_config.h"
#include "MCAL/SPI/slave.h"



int main(){
	// call the Dio_init to set the configuration of the registers
	Dio_init();
	// call SPI inint to initialize it as a salve
	SPI_SlaveInit();
	// while loop as its running until the simulation stops
	while(1){
		_delay_ms(10);
		// variable to get the command sent from SPI from MU1
		char rec = SPI_SlaveRec();
		//check the comming message to toggle either led 1 or 2
		if(rec=='a'){
			PORTD ^=(1<<3);
		}
		if(rec=='b'){
			PORTC ^=(1<<2);
		}
	}
	return 0;

}

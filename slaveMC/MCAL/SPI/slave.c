/*
 * slave.c
 *
 *  Created on: Sep 18, 2021
 *      Author: DELL
 */



#include "../../MCAL/SPI/slave.h"

void SPI_SlaveInit(void)
{
//	CLR_BIT(DDRB, 5);
//	CLR_BIT(DDRB, 7);
//	CLR_BIT(DDRB, 4);
//	SET_BIT(DDRB, 6);
	/* Set MISO output, all others input */
//	SPCR = (1<<6);
	/* Enable SPI */
	SPCR = (1<<SPE);

}

char SPI_SlaveRec()
{
	while(!(SPSR & (1<<SPIF)))
	;
	/* Return data register */
	return SPDR;
}

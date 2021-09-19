/*
 * master.c
 *
 *  Created on: Aug 21, 2021
 *      Author: DELL
 */

#include "master.h"

void SPI_MasterInit(void)
{
/* Set MOSI and SCK output, all others input */
//DDR_SPI = (1<<DD_MOSI)|(1<<DD_SCK);
/* Enable SPI, Master, set clock rate fck/16 */
//	SET_BIT(SPCR,SPIE);
//	SET_BIT(SPCR,MSTR);
//	CLR_BIT(SPSR,SPI2X);
//	CLR_BIT(SPCR,SPR1);
//	SET_BIT(SPCR,SPR0);

SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);
}

void SPI_MasterTransmit(char cData)
{
/* Start transmission */
SPDR = cData;
/* Wait for transmission complete */
while(!(SPSR & (1<<SPIF)))
;

}

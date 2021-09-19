/*
 * slave.h
 *
 *  Created on: Sep 18, 2021
 *      Author: DELL
 */

#ifndef MCAL_SPI_SLAVE_H_
#define MCAL_SPI_SLAVE_H_
#include <avr/io.h>
#include "../../BIT_MATH.h"
#include "../../STD_Types.h"
void SPI_SlaveInit(void);
char SPI_SlaveRec();

#endif /* MCAL_SPI_SLAVE_H_ */

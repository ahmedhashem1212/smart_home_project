/*
 * master.h
 *
 *  Created on: Aug 21, 2021
 *      Author: DELL
 */

#ifndef SPI_MASTER_MASTER_H_
#define SPI_MASTER_MASTER_H_
#include <avr/io.h>
#include "../../../BIT_MATH.h"
#include "../../../STD_Types.h"
#include "../../../MCAL/Dio/Dio.h"
void SPI_MasterInit(void);
void SPI_MasterTransmit(char cData);

#endif /* SPI_MASTER_MASTER_H_ */

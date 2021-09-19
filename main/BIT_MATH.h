/*
 * BIT_MATH.h
 *
 *  Created on: Jul 31, 2021
 *      Author: DELL
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(port,n) port|=(1<<n)
#define CLR_BIT(port,n) port &=~ (1<<n)
#define TOGGLE_BIT(port,n) port ^=(1<<n)
#define GET_BIT(port,n) (port&(1<<n))


#endif /* BIT_MATH_H_ */

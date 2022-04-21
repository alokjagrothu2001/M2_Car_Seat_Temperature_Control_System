#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#define F_CPU 16000000UL /**< Clock Frequency of MCU is 16 MHz */
#define USART_BAUDRATE 9600 /**< Baud rate for serial communication  */
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) /**< Formula to calculate UBRR value */

/**
 * Include files
 */
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Setting Baud rate and Enabling Rx and Tx
 *
 */
void USARTInit();

/**
 * @brief Reading data
 *
 * @return int The read data
 */
int USARTRead();

/**
 * @brief Writing data to view in serial monitor
 *
 * @param[in] z The ADC value
 */
void Activity4_USARTWrite(uint16_t z);

#endif // ACTIVITY4_H_INCLUDED

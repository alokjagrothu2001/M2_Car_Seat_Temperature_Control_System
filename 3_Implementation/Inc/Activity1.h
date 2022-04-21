#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#define F_CPU 16000000UL 	/**< Clock Frequency of Processor is 16 MHz */
#define LED_PORT (PORTD)    /**< LED Number Port */
#define LED_PIN  (PORTD3)   /**< LED Pin number  */
#define BUTTON_SENSOR  (PORTD0)   /**< Port for Button Sensor  */
#define TEMP_SENSOR  (PORTD1)   /**< Port for Temperature Sensor   */

/**
 * Include files
 */
#include <util/delay.h>
#include <avr/io.h>


/**
 * Function Definitions
 */

/**
 * @brief Initialize all the Peripherals and pin configurations
 *
 */
void peripheral_init(void);

/**
 * @brief Function to turn on the LED
 *
 */
void InitADC();


void TurnLED_ON();

/**
 * @brief Function to turn LED off
 *
 */
void TurnLED_OFF();

/**
 * @brief Activity 1 to Turn ON LED if switches for Button sensor and Heator sensor are pressed
 *
 */
int Activity1_LED(void);


#endif // ACTIVITY1_H_INCLUDED

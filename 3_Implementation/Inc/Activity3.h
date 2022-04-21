#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED

#define PWM_20_PERCENT (204) /**< Output PWM at 20% duty cycle */
#define PWM_40_PERCENT (409) /**< Output PWM at 40% duty cycle */
#define PWM_70_PERCENT (716) /**< Output PWM at 70% duty cycle */
#define PWM_95_PERCENT (972) /**< Output PWM at 95% duty cycle */

/**
 * Include files
 */
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Initialize Timer1 registers
 *
 */
void InitTimer();

/**
 * @brief Produce duty cycle in PWM according to i/p ADC value
 *
 * @param[in] z The ADC value from activity2
 */
void activity3_PWM(uint16_t z);
#endif // ACTIVITY3_H_INCLUDED

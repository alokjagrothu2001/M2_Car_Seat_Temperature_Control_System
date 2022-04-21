
#include "Activity1.h"

/**
 * @brief declaration of pins with registers
 * 
 */
void peripheral_init(void)
{
	DDRD |= (1<<PD3); // setting PD2=1 for LED
    DDRD &= ~(1<<PD0); //clearing bit
    PORTD |= (1<<PD0); //setting bit PD0 for SeatSwitch
    DDRD &= ~(1<<PD1); //clearing bit
    PORTD |= (1<<PD1); //setting bit PD0 for HeaterSwitch
}

void TurnLED_ON(){
    LED_PORT |= (1<<LED_PIN);
}

void TurnLED_OFF(){
    LED_PORT &= ~(1<<LED_PIN);
}

int action1=0;
int Activity1_LED(void)
{
       peripheral_init();
        if(!(PIND&(1<<BUTTON_SENSOR )) && !(PIND&(1<<TEMP_SENSOR))) //both the switches are pressed
        {
            action1=1;
        }
        else  //in all other cases
        {
            action1=0;
        }
    return action1;
}

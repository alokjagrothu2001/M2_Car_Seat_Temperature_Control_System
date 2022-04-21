#include "Activity2.h"

void InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA= (1<<ADEN)|(7<<ADPS0);
}

uint16_t ReadADC(uint8_t a)
{
    ADMUX&=0xf8;
    a=a&0b00000111;
    ADMUX|=a;

    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);
}

uint16_t Activity2_GetADC(void)
{
      InitADC();
      uint16_t z;
      z=ReadADC(0);
      return z;
}

#include "Activity4.h"

void USARTInit()
{
    UBRR0H = (uint8_t)(UBRR_VALUE>>8);
    UBRR0L = (uint8_t)UBRR_VALUE;
    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

int USARTRead()
{
    while(!(UCSR0A &(1<<RXC0)))
    {
        //Do nothing
    }
    return UDR0;
}

void Activity4_USARTWrite(uint16_t z)
{
    int e=0;
        if(z>=0 && z<=200){
            unsigned char data1[]="Temperature: 20 degree C\n";
            e=0;
            while(data1[e]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data1[e];        // Put data into buffer, sends the data
            e++;
            }
            _delay_ms(2000);
        }
        else if(z>=210 && z<=500){
            unsigned char data2[]="Temperature: 25 degree C\n";
            e=0;
            while(data2[e]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data2[e];        // Put data into buffer, sends the data
            e++;
            }
            _delay_ms(2000);
        }
        else if(z>=510 && z<=700){
             unsigned char data3[]="Temperature: 29 degree C\n";
            e=0;
            while(data3[e]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data3[e];        // Put data into buffer, sends the data
            e++;
            }
            _delay_ms(2000);
        }
        else if(z>=710 && z<=1024){
            unsigned char data4[]="Temperature: 33 degree C\n";
            e=0;
            while(data4[e]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data4[e];        // Put data into buffer, sends the data
            e++;
            }
            _delay_ms(2000);
        }
        else{
              unsigned char data5[]="Temperature: 0 degree C\n";
            e=0;
            while(data5[e]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data5[e];        // Put data into buffer, sends the data
            e++;
            }
            _delay_ms(2000);

        }
}

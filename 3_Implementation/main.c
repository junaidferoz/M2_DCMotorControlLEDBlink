#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int value;long resistance;double thermistor;
void initialize_adc(){
    ADMUX = (1<<REFS0);
    ADCSRA |= (1<<ADEN) | (0x07<<ADPS0);
}
int adc(uint8_t channel){
    /* ch must be 0-7 */
    ADMUX &= 0xf8;
    channel &= 0x07;
    ADMUX |= channel;
    ADCSRA |= (1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA |= (1<<ADIF);
    return ADC;
}
double getTemperature(){
    value=adc(0);
    resistance = ((10230000/value)-10000);
    thermistor = log(resistance);
    1 / (0.001129148 + (0.000234125 * thermistor) + (0.0000000876741 * thermistor * thermistor * thermistor));
    thermistor-=273.15;
    return thermistor;
}
int main(void){
    DDRB= 0xFF;
    initialize_adc();
	PORTB = 0x80;
    while(1){
        double temperature = getTemperature();
        if(temperature>=25.00){
        PORTB = 0x80;
        }
    }
}
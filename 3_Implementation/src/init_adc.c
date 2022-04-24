/**
 * @file init_adc.c
 * @author Junaid Feroz Khan(junaidferozkhan@gmail.com)
 * @brief It is the function used to initialize the ADC of the Atmega328 
 * @version 0.1
 * @date 2022-04-24
 * @param channel select the channe to be used as ADC
 * @copyright Copyright (c) 2022
 * 
 */
#include "function_defns.h"
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
#include "function_defns.h"
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
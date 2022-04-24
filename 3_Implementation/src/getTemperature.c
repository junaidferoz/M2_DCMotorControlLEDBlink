/**
 * @file getTemperature.c
 * @author Junaid Feroz Khan(junaidferozkhan@gmail.com)
 * @brief Utility function used to convert the received ADC value to temperature value
 * @version 0.1
 * @date 2022-04-24
 * @return double value depicting the temperature of the surrounding environment
 * @copyright Copyright (c) 2022
 * 
 */
#include "function_defns.h"
double getTemperature(){
    value=adc(0);
    resistance = ((10230000/value)-10000);
    thermistor = log(resistance);
    1 / (0.001129148 + (0.000234125 * thermistor) + (0.0000000876741 * thermistor * thermistor * thermistor));
    thermistor-=273.15;
    return thermistor;
}

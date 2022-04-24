/**
 * @file function_defns.h
 * @author Junaid Feroz Khan(you@domain.com)
 * @brief It contains all the declarations and definitions needed for the program
 * @version 0.1
 * @date 2022-04-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _FUNCTION_DEFNS_H_
#define _FUNCTION_DEFNS_H_
#include "header.h"
int value;long resistance;double thermistor;
void initialize_adc(void);
int adc(uint8_t channel);
double getTemperature(void);
#endif
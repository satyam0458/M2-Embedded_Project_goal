/**
 * @file Activity2.h
 * @author pavan
 * @Activity 2 header file
 * @version 0.1
 * @date 2021-09-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__
/**
 * @Including header files
 * 
 */
 
#include <util/delay.h>
#include <avr/io.h>

/**
 * @Intialising the function for ADC
 * 
 */
void initialiseADC();

/**
 * 
 * @returning the ADC value
 */
uint16_t readADC(uint8_t ch);

/**
 * @Return the ADC value to main function
 * 

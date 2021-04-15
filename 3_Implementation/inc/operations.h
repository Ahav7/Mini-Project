/** 
 *
* @file operations.h
* Resistance Calculator application with dfferent circuit operations
*
*/
#ifndef __OPERATIONS_H__
#define __OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>

/**
*  find the total resistance when connected in series
* @param[in] r1(resistance 1)
* @param[in] r2(resistance 2)
* @return Total series resistance
*/
float total_ser(float r1, float r2,float r3);

/**
*  find the total resistance when connected in parallel
* @param[in] r1(resistance 1)
* @param[in] r2(resistance 2)
* @return Total parallel resistance
*/
float total_par(float r1, float r2,float r3);



/**
*  Unit conversion(ohm-kiolohm,watt-kilowatt,.....) 
* @param[in] r(any unit)
* @return Converted Result 
*/
double unit_conv1(double r );
double unit_conv2(double r );
double unit_conv3(double r );
double unit_conv4(double r );

/**
*  calculate resistance based on voltage and current(ohms law)
* @param[in] v(volt)
* @param[in] i(current)
* @return Calculated resistance
*/
float  cal_res (float v, float i);


/**
* calculate the resistance value based on color code
* @param[in] band1 
* @param[in] band2 
* @param[in] band3
* @param[in] band4
* @return value of resistance
* @note Tolerance value is not calculated in this function
*/
int res_val(int a,int b,int c,int d);

#endif  /* #define __OPERATIONS_H__ */
/**
 * @file operations.h
 * @author Hemanth (https://github.com/Ahav7/Mini-Project)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
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

//  find the total resistance when connected in series
float total_ser(float r1, float r2,float r3);
float total_par(float r1, float r2,float r3);
double unit_conv1(double r );
double unit_conv2(double r );
double unit_conv3(double r );
double unit_conv4(double r );
float  cal_res (float v, float i);



 //calculate the resistance value based on color code

int res_val(int a,int b,int c,int d);

#endif  


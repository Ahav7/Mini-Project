
#ifndef __OPERATIONS_H__
#define __OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>

//Series resistance
float total_ser(float r1, float r2,float r3);

//Parallel resistance
float total_par(float r1, float r2,float r3);



//Conversion
double unit_conv1(double r );
double unit_conv2(double r );
double unit_conv3(double r );
double unit_conv4(double r );

//Resistance based on voltage current parameters
float  cal_res (float v, float i);


//Colour band resistance
int res_val(int a,int b,int c,int d);

#endif  

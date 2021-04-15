/**
 * @file operations.c
 * @author Hemanth (https://github.com/Ahav7/Mini-Project)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "operations.h"
#include<math.h>
float total_ser(float x, float y,float z)
{ 
    float b;
    b=x+y+z;
    return b;
}
float total_par(float x, float y,float z)
{
    float c;
    c=((x*y*z)/(x*y+y*z+z*x));
    return c;
}
float  cal_res (float voltage, float current)
{
    return(voltage/current);
}
double unit_conv1(double resistance )
{
   return resistance*pow(10,3);
}
double unit_conv2(double resistance )
{
    return resistance*pow(10,-3);
}
double unit_conv3(double resistance )
{
    return resistance*pow(10,6);
}
double unit_conv4(double resistance )
{
    return resistance*pow(10,-6);
}
int res_val(int m,int n,int o,int p)
{
     int res;
     res=((m*100)+(n*10)+(o))*pow(10,p);
     return res;
}

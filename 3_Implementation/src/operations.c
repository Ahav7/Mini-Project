#include "operations.h"
#include<math.h>
float total_ser(float r1, float r2,float r3)
{ 
    float b;
    b=r1+r2+r3;
    return b;
}
float total_par(float r1, float r2,float r3)
{
    float c;
    c=((r1*r2*r3)/(r3*r2+r1*r3+r2*r1));
    return c;
}
float  cal_res (float v, float i)
{
    return(v/i);
}
double unit_conv1(double r )
{
   return r*pow(10,3);
}
double unit_conv2(double r )
{
    return r*pow(10,-3);
}
double unit_conv3(double r )
{
    return r*pow(10,6);
}
double unit_conv4(double r )
{
    return r*pow(10,-6);
}
int res_val(int a,int b,int c,int d)
    {
        int z;
        z=((a*100)+(b*10)+(c))*pow(10,d);
        return z;
    }
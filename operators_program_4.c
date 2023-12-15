/*Write a program to receive Cartesian co-ordinates (x, y) of a point 
and convert them into polar co-ordinates (r, ).  
Hint:  r = sqrt ( x2 + y2 ) and tan-1 ( y / x ) */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float x,y,r,theta,theta1;

    printf("Enter the Cartesian coordinates (x,y): ");
    scanf("%f , %f",&x, &y);

    r = sqrt(pow(x,2 )+ pow(y,2));
    //degree = radians * 180/pi
    theta  = atan(y/x) *(180/3.1415);
    /*I	Use the calculated value
    II	Add 180° to the calculated value
    III	Add 180° to the calculated value
    IV	Add 360° to the calculated value*/

    if (x>0 && y>0)
    {
        theta1 = theta;
    }
    else if (x>0 && y<0)
    {
        theta1 = 360+  theta;
    }
    else if (x<0 && y>0 )
    {
        theta1 = 180 + theta;
    }
    else if (x<0 && y <0)
    {
        theta1 = 180+ theta;
    }
    
    
    
    printf("The polar co-ordintes is (%.2f, %.2f)",r,theta1);
    return 0;
}
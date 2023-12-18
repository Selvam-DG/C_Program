/*If value of an angle is input through the keyboard, write a program 
to print all its Trigonometric ratios. */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float radians, degree,sinx,cosx,tanx,cotx,secx,cosecx;
    printf(" Enter the angle to get all trignometric ratios:");
    scanf("%f",&degree);
    radians = (degree *(3.1417 /180 ));
    sinx = sin(radians);
    cosx =  cos(radians) ;
    tanx =  sinx/cosx;
    cotx = cosx/sinx;
    secx = 1/cosx;
    cosecx = 1/sinx ;
    printf("sin(%.2f) = %.3f\n",degree, sinx);
    printf("cos(%.2f) = %.3f\n",degree, cosx );
    printf("tan(%.2f) = %.3f\n",degree, tanx);
    printf("cot(%.2f) = %.3f\n",degree, cotx);
    printf("sec(%.2f) = %.3f\n",degree, secx);
    printf("cosec(%.2f) = %.3f\n",degree, cosecx);
    return 0;
}
/*
Wind chill factor is the felt air temperature on exposed skin due to 
wind. The wind chill temperature is always lower than the air 
temperature, and is calculated as per the following formula: 
wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v0.16 where t is the temperature and v is the wind velocity. Write a 
program to receive values of t and v and calculate wind chill factor 
(wcf).  */

#include <stdio.h>
#include <math.h>


int main()
{
    float temperature, velocity,wcf;

    printf("Enter the values of Temperature(celsius), wind velocity(m/s) to calculate Wind Chill factor: ");
    scanf("%f, %f", &temperature,&velocity);

    // formula wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v ^0.16

    wcf = (35.74 + (0.6215 * temperature)) +( ((0.4275 * temperature) - 35.75) * pow(velocity, 0.16));

    printf("Wind Chill factor = %.2f", wcf);

    return 0;

}

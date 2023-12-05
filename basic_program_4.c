/*Temperature of a city in Fahrenheit degrees is input through the 
keyboard. Write a program to convert this temperature into 
Centigrade degrees. */


#include <stdio.h>

int main()
{
    float temp_fahr, temp_celsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&temp_fahr);

    // temperatre from fahrenheit to celsius is converted by cel = (5/9)(fah-32)
    // int divided by int gives int value not a float values
    // int divided by float or float divided float or float divided by float gives float value
    
    temp_celsius = (5.00/9)* (temp_fahr- 32);

    printf("Temperature in Degree celsius is  %.2f celsius",temp_celsius);

    return 0;
}
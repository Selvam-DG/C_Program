/*Write a program to find the absolute value of a number entered 
through the keyboard. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int number;

    printf("Enter the number to find the absolute value: ");
    scanf ("%d", &number);

    if (number < 0)
    {
        printf("%d", -number);
    }
    else
        printf("%d", number);

    printf("\n Absolute value = %u", (unsigned)((number<0)?-number:number));  // unsigned ensures the data type for print statement 

    printf("\n Absolute value by function from stdlib header file = %d",abs(number));

    return 0;
}
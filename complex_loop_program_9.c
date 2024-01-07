/*The natural logarithm can be approximated by the following series.
((x-1)/x) + (1/2)((x-1)/x)^2 + (1/2)((x-1)/x)^3......
If x is input through the keyboard, write a program to calculate the 
sum of first seven terms of this series*/

#include <stdio.h>
#include <math.h>
# define SERIES 7
float compute(float,int);
int main(void)
{
    float number, result=0;
    // getting number from the user
    printf("Enter the number:");
    scanf("%f",&number);
    // calculate the sum of first seven terms of the natural logarithm series
    for(int temp = 1; temp <=SERIES; temp++)
    {
        // sum up the result from the previously calculated series value
        result = result + compute(number, temp);;
    }

    printf("\nSum of first seven terms of The natural logarithm series = %.4f", result);
    return 0;
}
float compute(float number,int power)
{
    int temp1;
    float calculate, product=1;
    // first term in the series
    if(power ==1 )
    {
        return (number-1)/number;
    }
    // except first term, the remaining terms in the series can be computed by their power of calculated value
    else
    {
        // for(temp1=0; temp1<power; temp1++ )
        // {
        //     product = product* ((number-1)/number);
            
        // }
        calculate = (number-1)/number;
        product = (double)pow(calculate, power);
        // mutlitply with (1/2) for each term except the first term
        return 0.5*product;
    }

}
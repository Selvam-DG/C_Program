/*When interest compounds q times per year at an annual rate of  
r % for n years, the principal p compounds to an amount a as per 
the following formula 
a = p ( 1 + r / q ) nq 
Write a program to read 10 sets of p, r, n & q and calculate the 
corresponding a's.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int year,temp=0;
    float interest_rate, principal, compound, interst_amount;
    while(temp<2)
    {
        printf("Enter the principal amount,interest rate, compound intrest, year :");
        scanf("%f,%f,%f,%d", &principal, &interest_rate,&compound, &year);

        interst_amount  = principal*(double)pow((1+(interest_rate/compound)),(year*compound));
        printf("Amount = %.2f\n", interst_amount);
        temp++;
    }
    return 0;
}
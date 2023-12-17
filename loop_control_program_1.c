/*Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every hour 
worked above 40 hours. Assume that employees do not work for 
fractional part of an hour. */

#include <stdio.h>

int main()
{
    int hour, cost = 0;
    
    // calculating overtime pay for each employee
    /*printf("Enter the working hours worked per week");
    scanf("%d", &hour);
    while(hour > 40)
    {
        cost = cost + 12;
        hour--;
    }
    printf("%d", cost);
    */


    // getting working hours of employee

    for(int j= 0; j< 10; j++)
    {
        printf("\nEnter the Employee-%d working hours worked per week: ",(j+1));
        scanf("%d", &hour);
        if(hour >0 )
        {
            while(hour > 40)
            {
                cost = cost + 12;
                hour--;
            }
            printf("\nOvertime paid = %d", cost);
        }
        else
        {
            printf("\nNegative numbers are not valid");
            continue;
        }
        cost =0;
    }


    return 0;
}
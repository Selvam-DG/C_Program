/*Ramesh’s basic salary is input through the keyboard. His dearness 
allowance is 40% of basic salary, and house rent allowance is 20% of 
basic salary. Write a program to calculate his gross salary. */

#include <stdio.h>

int main()
{
    float salary;
    float dearness_allowance, house_rent_allowance, gross_salary;

    printf("Enter Ramesh's Basic salary : ");
    scanf("%f",&salary);

    dearness_allowance = 0.4 * salary;
    house_rent_allowance = 0.2 * salary ;

    gross_salary = salary + dearness_allowance + house_rent_allowance ;

    printf("Ramesh's Gross Salary is %.2f", gross_salary);

    return 0;
    
}
/*Any year is entered through the keyboard, write a program to 
determine whether the year is leap or not. Use the logical operators 
&& and ||. */
// A Leap year is evenly divisible by 4 and not evenly divisible by 100
//  and also leap year is evenly divisible by 100 and 400
#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year to check it's a leap year or  not: ");
    scanf("%d",&year);

    ((year %4 == 0 && year%100 != 0)|| (year%100 ==0 && year%400 == 0)) ? printf("Year = %d is a Leap Year", year) : printf("Year = %d is Not a Leap Year",year);

    return 0;
}
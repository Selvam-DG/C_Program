/*According to the Gregorian calendar, it was Monday on the date 
01/01/01. If any year is input through the keyboard write a program 
to find out what is the day on 1st January of this year.*/

#include <stdio.h>
int year,num_lp,ny,rem;



int main()
{
    int year,x ;
    printf("Enter the year to find the day of 1st January: ");
    scanf("%d", &year);
    
    if (year>=400)
    {
        year = year - ((year/400) *400);
        num_lp = year/4;
        ny = (num_lp*2) + ((year-num_lp)*1);
        x = ny % 7;
    }
    else
        x = year % 4;
    
    if( x == 1)
        printf("Monday");
    else if( x == 2)
        printf("Tuesday");
    else if( x == 3)
        printf("Wednesday");
    else if( x == 4)
        printf("Thursday");
    else if( x == 5)
        printf("Friday");
    else if( x == 6)
        printf("Saturday");
    else if( x == 0)
        printf("Sunday");
    else 
     return -1;

    
    return 0; // if(year % 400 == 0 )
}
// int day_year (year)
// {
    // if (year>=400)
    // {
    //     year = year - ((year/400) *400);

    // }
    // num_lp = year/4;
    // ny = (num_lp*2) + ((year-num_lp)*1);
    // rem = ny % 7;

// }
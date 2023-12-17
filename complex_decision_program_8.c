/*Write a program that receives month and date of birth as input and 
prints the corresponding Zodiac sign based on the following table: 
Sun Sign
 Capricorn - December 22 - January 19
 Aquarius - January 20 - February 17
 Pisces - February 18 - March 19
 Aries -  March 20 - April 19
 Taurus - April 20 - May 20
 Gemini -  May 21 - June 20
 Cancer - June 21 - July 22
 Leo -  July 23- August 22
 Virgo - August 23 - September 22
 Libra -  September 23 - October 22
 Scorpio - October 23 - November 21
 Sagittarius -  November 22 - December 21
*/

#include <stdio.h>
#include <ctype.h>
void check_month();

int check_dateformat(int);
void month_toupper();

// declaring global variables
int date;
int count = 0, i = 0;
char month[10]= "", month_upper[ ]= "", month_lower_fun[10] ="",n;
char *MONTH;
MONTH = &month_upper;

int main()
{
    // asking user to enter the month and date of the birth:
    printf("Enter the birth month:");
    scanf("%s",&month);
    printf("Enter the birth date:");
    scanf("%d",&date);

    // check whether user entered the corrected date (1-31) and month (A-Z or a-z)
    // check_month();
    // check_dateformat(date);
    // month_toupper();
    
    for(int j=0 ; j < count; j++)
    {
        month_lower_fun[j] = toupper(month[j]);
    }
    printf("%s", month_upper);

    
    if(MONTH == "JANUARY")
    {
        if (date > 19 && date <= 31)
            printf("Aquarius");
        else if(date >0 && date<20)
            printf("capricorn");
    }
    else
        printf("Sorry");
    // else if(month_upper[10] == "FEBRUARY")
    // {
    //     if (date > 0 && date <= 17)
    //         printf("Aquarius");
    //     else if(date >17 && date<30)
    //         printf("Pisces");
    // }
    // else if(month_upper[10] = 'MARCH')
    // {
    //     if (date > 0 && date <= 19)
    //         printf("Pisces");
    //     else if(date >19 && date<=31)
    //         printf("Aries");
    // }
    // else if(month_upper[10] = 'APRIL')
    // {
    //     if (date > 0&& date <= 19)
    //         printf("Aries");
    //     else if(date >=20 && date<31)
    //         printf("Taurus");
    // }
    // else if(month_upper[10] = 'MAY')
    // {
    //     if (date > 0 && date <= 20)
    //         printf("Taurus");
    //     else if(date >20 && date<=31)
    //         printf("Gemini");
    // }
    // else if(month_upper[10] = 'JUNE')
    // {
    //     if (date > 0 && date <= 20)
    //         printf("Gemini");
    //     else if(date >20 && date<=31)
    //         printf("Cancer");
    // }
    // else if(month_upper[10] = 'JULY')
    // {
    //     if (date > 0 && date <= 22)
    //         printf("Cancer");
    //     else if(date >22 && date<31)
    //         printf("Leo");
    // }
    // else if(month_upper[10] = 'AUGUST')
    // {
    //     if (date > 0 && date <= 22)
    //         printf("Leo");
    //     else if(date >22 && date<=31)
    //         printf("Virgo");
    // }
    // else if(month_upper[10] = 'SEPTEMBER')
    // {
    //     if (date > 0 && date <= 22)
    //         printf("Virgo");
    //     else if(date >22 && date<31)
    //         printf("Libra");
    // }
    // else if(month_upper[10] = 'OCTOBER')
    // {
    //     if (date > 0 && date <= 22)
    //         printf("Libra");
    //     else if(date >22 && date<=31)
    //         printf("Scorpio");
    // }
    // else if(month_upper[10] = 'NOVEMBER')
    // {
    //     if (date > 0 && date <= 21)
    //         printf("Scorpio");
    //     else if(date >21 && date<31)
    //         printf("Sagittarius");
    // }
    // else if(month_upper[10] = 'DECEMBER')
    // {
    //     if (date > 0 && date <= 21)
    //         printf("Sagittarius");
    //     else if(date >21 && date<=31)
    //         printf("Aquarius");
    // }

    return 0;
}

void check_month()
{
    int temp = 0;
    while(month[temp] != '\0')
    {
        if((month[temp] >= 'A' && month[temp] <= 'Z') || (month[temp] >= 'a' && month[temp] <= 'z'))
        {
            ;
            // passs
            
        }
        else
        {
            printf("Invalidcharcters in month");
            break;
        }
        temp++;
        
        
    }

}
void month_toupper()
{
    int i=0;
    while(month[i] != '\0')
    {
        count++;

        if(month[i] >= 'A' && month[i] <= 'Z')
        {
            month_upper[i] = month[i];
            
        }
        else if (month[i] >= 'a' && month[i] <= 'z')
        {
            int temp;
            temp = month[i];
            month_upper[i] = month[i] - 32;
            
        }
        i++;
    }

}
int check_dateformat(int date)
{
    if(date<0 || date >31)
    {
        printf("Invalid date");
    }
}

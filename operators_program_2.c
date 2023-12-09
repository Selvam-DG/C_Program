/*If a five-digit number is input through the keyboard, write a 
program to reverse the number. */

#include <stdio.h>

int main()
{
    long number;
    long temp, reverse_number, sum = 0,temp_num;
    printf("Enter the Number : ");
    scanf("%ld",&number);
    temp_num = number ;
    while(number >0)
    {
        temp = number % 10 ;
        sum = temp + sum *10;
        number = number / 10;

    }
    reverse_number = sum ;

    printf("The Number %ld is reversed : %ld",temp_num, reverse_number);

    return 0;                       
}

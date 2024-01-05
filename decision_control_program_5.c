/*A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine whether 
the original and reversed numbers are equal or not. */

#include <stdio.h>

int main(void)
{
    int number, initial_number, temp, reverse_number = 0;

    printf("Enter the number to reverse from right to left: ");
    scanf("%d",&number);

    initial_number = number ;

    while(number > 0)
    {
        temp = number % 10 ;
        reverse_number = reverse_number * 10 + temp;
        number = number /10 ;
    }
    // if( initial_number ==  reverse_number)
    // {
    //     printf("Entered Number is same as Reversed Number");
    // }
    // else
    //     printf("Reversed Number is not equal as Enter Number");

    // Conditional Expression

    ( initial_number ==  reverse_number) ?  printf("Entered Number is same as Reversed Number"):  printf("Reversed Number is not equal as Enter Number");

    return 0;
}
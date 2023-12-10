/*Any integer is input through the keyboard. Write a program to find 
out whether it is an odd number or even number. */

#include <stdio.h>
int check_even_or_odd(void);
// void function returns nothing and the void argument takes nothing as argument
// int check_even_or_odd(); (other way of representation of function)

int number;
// variable is mada as a global variable because no argument are passing inside the function (void is used as an argument)
int main(void)
{
    printf("Entet the number to check even or odd : ");
    scanf("%d",&number);
    //calling the function without passing the argument
    check_even_or_odd();
    return 0;

}

int check_even_or_odd()
{
    (number%2 == 0) ? printf( "Even number") : printf ("odd number");

}
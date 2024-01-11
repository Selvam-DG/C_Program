/*Write a program to find the factorial value of any number entered 
through the keyboard. */

#include <stdio.h>

int factorial(int);
int rec_factorial(int);
int main()
{
    // taking input from the user
    int number, fun, rec_fun;
    printf("Enter the number: ");
    scanf("%d",&number);
    // calling function to calculate the factorial
    fun = factorial(number);
    printf("Factorial of %d is %d",number, fun);

    // calling recursive function to calculate the factorial
    rec_fun = rec_factorial(number);
    printf("\n Using recursive function, Factorial is %d",rec_fun);

    return 0;
}

int factorial(int n)
{
    int fact =1;
    for(int j = 1; j<=n ; j++)
    {
        fact = fact*j;
    }
    return fact;
}
int rec_factorial (int num)
{
    if (num >=1)
        return num*rec_factorial(num-1);
    else 
        return 1;
}
/* Write a function to calculate the factorial value of any integer 
entered through the keyboard.*/

#include<stdio.h>       //stdio is a standard i/p o/p library
int factorial(int x);   // Initialize a function to calculate the factorial of a number
int main()
{
    int n,f ;
    // Take number from the user
    printf("Enter the number: ");
    scanf("%d",&n);

    // Check whether user entered the positive integer

    if (n>=0)
    {
        // calling a function called factorial 
        f = factorial(n);
        printf("Factorial of %d is %d",n,f);
    }
    else
    printf("Factorial of negavtive numbers is undefined");
    
    return 0;
}
int factorial(int x)
{
    int i,fact =1;
    // if user entered a postive integer grater than 0
    if (x>=1)
    {
        for(i=1;i<=x;i++)
        {
            fact = fact*i;
        }
        return(fact);
    }
    else
    {
        // if user entered 0 value of n, then return the factorial as 1
       return (fact);
    }   
    

}
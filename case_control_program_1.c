/* Write a menu driven program which has following options: 
 
1.  Factorial of a number 
2.  Prime or not 
3.  Odd or even 
4.  Exit 
Once a menu item is selected the appropriate action should be 
taken and once this action is finished, the menu should reappear. 
Unless the user selects the ‘Exit’ option the program should 
continue to run. 
*/

#include <stdio.h>
#include <conio.h>
int Factorial(int);
int check_prime(int);
int odd_even(int);

int main(void)
{
    int temp, choice, number;
    temp =1 ;
    // loop the statement till the user want to exti
    while(temp)
    {
        // take the choice from the user
        printf("\nEnter your choice:\n 1 for Factorial of a number \n 2 for Prime or not \n 3 for odd or even \n 4 to exit: \n ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("You have to chosen the option to get the factorial of  a number: \n");
                printf("Please enter the number: ");
                scanf("%d", &number);
                Factorial(number);
                break;
            case 2:
                printf("You have opeted to check the number is prime or not??? \n");
                printf("Enter the number: ");
                scanf("%d", &number);
                check_prime(number);
                break;
            case 3:
                printf("You have chosen the option to check the number is even or odd: \n");
                printf("Enter the number: ");
                scanf("%d", &number);
                odd_even(number);
                break;
            case 4:
                printf("You opted to exit the program. Thank you");
                temp = 0;
                break;
            default:
                printf("Sorry!!!! You have chosen an invalid option from the menu. Please select the proper option");
                break;
        }

    }
}
int Factorial(int num)
{
    int i, result=1;
    if(num == 0 )
    {
        printf("Factorial of  0 is 1");
    }
    else if( num <0)
    {
        printf("Factorial of negative numbers are invalid") ;
    }
    else
    {
        for( i=num; i>0; i--)
        {
            result =  result*i;
        }
        printf("%d", result);
    }
    
}
int check_prime(int number)
{
    int i, count=0;
    if(number > 2)
    {
        for(i = 1; i<= number/2; i++)
        {
            if(number % i == 0)
                count++;
        }
        (count >1)? printf("Number is not prime"): printf("Number is prime");
    }
    else if(number == 2)
        printf("2 is an even prime number");
    else
        printf("Please enter valid number");
        

}
int odd_even(int number)
{
    if(number>0)
    {
        (number%2 == 0) ? printf("Entered number is even number"): printf("Entered number is odd number");
    }
    else
        printf("Please enter the valid number");
}
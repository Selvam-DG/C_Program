/*Write a program to print all prime numbers from 1 to 300. (Hint: 
Use nested loops, break and continue) */

#include <stdio.h>
#include <time.h>
int check_prime(int);
int main()
{
    int i;
    // checking the prime number from 1 to 300
    for (i=1; i<= 300 ; i++)
    {

        // 2 is an even prime number
        if(i == 2)
            printf("2 is an even prime number");
        else
        // check the current number is prime or not
            check_prime(i);
    }
}
// Any number is said to prime, if the number is divisible only by itself and 1
int check_prime(int number)
{
    if(number >2)
    {
        int temp, count=0;
        // divide the number from 2 to half of the number, if number divides and gives a remainder as 0, then the number is not prime
        for(temp = 2; temp<= number/2; temp++)
        {
            if((number % temp) == 0)
            {
                count++;
                // if the number divides atleast with anothe number other than itself, break the loop and the number is not prime
                break;
            }
        }
        if(count == 0)
            printf("%d\n", number);
    }
    
}
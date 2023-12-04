/* If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits. (Hint: Use the modulus 
operator ‘%’)  */

#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0, i;
    printf("Enter the five-digit number : ");
    scanf("%d",&number);

    while(number > 0)
    {
        sum = sum + number%10;
        number = number / 10;
    }
    printf("Sum of the digits = %d",sum);

    return 0;
}
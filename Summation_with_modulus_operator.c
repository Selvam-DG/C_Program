/* If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits. (Hint: Use the modulus 
operator ‘%’)*/

#include<stdio.h>
int main(void)
{
 int n;  // declaring variables
 int s =0;
do {
     printf("Enter a digit: ");
     scanf("%d",&n);
    } while (n<0);    // taking input as only positive values
 
 while (n>0)  
 {
    int x = n%10; // getting the remainder value by divide with 10
    
    s = s + x; // summing the remainder digits

    n = n/10; // cal. new n value by removing last digit

  }
  
 printf("%d",s); // printing summaation of all digits


 return 0;

}
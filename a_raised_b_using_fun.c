
// * Write a function power ( a, b ) // to calculate the value of a raised to b*/

#include <stdio.h>
#include <math.h>
float power(float ,float );  // declaring function 
int main()
{
    float i,j,res;
    printf("Enter the values of a,b to calculate a raised to b:\n");

    // taking the values of a and b from user

    printf("Enter the value of a:");
    scanf("%f",&i);
    printf("\nEnter the value of b: ");
    scanf("%f",&j);

    res = power(i,j);    //calling function to calcute 
    printf("Answer is %f",res);

    return 0;
}
float power(float a,float b)
{
    float p =1;
    for(int k = 0;k<b;k++)  //multiply the values a till b
    {
         p = p*a;
    }
    return(p);
}
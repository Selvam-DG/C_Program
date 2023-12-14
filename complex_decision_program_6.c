/*In boxing the weight class of a boxer is decided as per the following 
table. Write a program that receives weight as input and prints out 
the boxer’s weight class.  
Boxer Class
 Flyweight =< 115
 Bantamweight = 115 - 121
 Featherweight =  122 - 153
 Middleweight  =  154 – 189
 Heavyweight  = >= 190
 Weight in Pounds
*/

#include <stdio.h>

int main(void)
{
    float weight;

    printf("Enter the weight of a boxer :");
    scanf("%f", &weight);

    if(weight < 155)
        printf("Boxer's weight class is Flyweight");
    else if (weight >= 115 && weight <= 121)
    {
        printf("Boxer's weight class is Bantamweight");
    }
    else if (weight >= 122 && weight <= 153)
    {
        printf("Boxer's weight class is Featherweight");
    }
    else if (weight >= 154 && weight <= 189)
    {
        printf("Boxer's weight class is Middleweight");
    }
    else
        printf("Boxer's weight is Heavyweight");

    return 0;
    
    
    
}
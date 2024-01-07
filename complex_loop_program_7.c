/*According to a study, the approximate level of intelligence of a 
person can be calculated using the following formula:  
 
i = 2 + ( y + 0.5 x )  
Write a program that will produce a table of values of i, y and x, 
where y varies from 1 to 6, and, for each value of y, x varies from 
5.5 to 12.5 in steps of 0.5. */

#include <stdio.h>

int main()
{
    int coefficient=1;
    float slope = 5.5, intelligence;
    printf("|     y    |     x     |    i    |\n");
    printf("-------------------------------\n");

    while (coefficient<=6)
    {
        while( slope <=12.5)
        {
            intelligence = coefficient + (0.5 * slope);
            printf("|   %d  |   %.2f   |   %.2f   |\n", coefficient,slope,intelligence);
            slope+=0.5;
        }
        coefficient++;
        slope=5.5;

    }
    printf("-------------------------------\n");
    return 0;
}
/*Write a program to generate all Pythogorean Triplets with side 
length less than or equal to 30. */

#include <stdio.h>

int main()
{
    int side1, side2,side3;

    for(side1=1; side1 <=30; side1++)
    {
        for(side2=1; side2 <= 30;side2++)
        {
            for(int side3=1;side3 <= 30; side3++)
            {
                if((side3*side3) == (side1*side1)+(side2*side2))
                // for Pythogorean Triples , hypotenuse square is equal to sum of squares of other two sides
                    printf("(%d,%d,%d),", side1,side2,side3);
            }
        }
    }
    return 0;

}
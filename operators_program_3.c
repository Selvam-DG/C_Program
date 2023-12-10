/*If lengths of three sides of a triangle are input through the 
keyboard, write a program to find the area of the triangle. */
#include <math.h>
#include <stdio.h>

int main(void)
{
    float side_a, side_b, side_c;
    float sum, sum1, area;

    printf("Enter three sides of triangle seperateby comma: ");
    scanf("%f, %f, %f",&side_a, &side_b, &side_c);

    // Formula : area = sqrt(s*(s-a)*(s-b)*(s-c))

    sum = (side_a + side_b + side_c)/2.0;
    area = sqrt(sum * (sum - side_a) * (sum - side_b) * (sum - side_c));
    printf("\nArea of the Triangle = %.2f ",area);

    return 0;
}
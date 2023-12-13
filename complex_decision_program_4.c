/*If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is valid or not. The 
triangle is valid if the sum of two sides is greater than the largest of 
the three sides. */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float side1, side2, side3, largest_side, rem_side1, rem_side2;
    printf("Enter the three sides of the triangle separated by comma  :");
    scanf("%f,%f, %f", &side1, &side2, &side3);
    (side1 > side2)? ((side1 >side3)? (largest_side = side1) : (largest_side = side3)) : ((side2 > side3)? (largest_side = side2): (largest_side = side3));
    
    if (largest_side > side2 && largest_side > side3)
    {  
        rem_side1 = side2;
        rem_side2 = side3;
    }
    else if(largest_side > side1 && largest_side > side3)
    {
        rem_side1 = side1;
        rem_side2 = side3;
    }
    else if(largest_side > side1 && largest_side > side2)
    {
        rem_side1 = side1;
        rem_side2 = side2;
    }
    printf("\nThe largest side in the triangle = %.2f",largest_side);
    printf("\nThe remaining side of the triangle is %.2f, %.2f", rem_side1,rem_side2);
    if(rem_side1 + rem_side2 > largest_side)
        printf("\nThe triangle is with sides %.2f, %.2f, %.2f are valid", side1, side2, side3) ;
    else
    {
        printf("\nThe triangle is with sides %.2f, %.2f, %.2f are not valid", side1, side2, side3);
    }
    
    return 0;
        
}
/*If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is isosceles, 
equilateral, scalene or right angled triangle. */

#include <stdio.h>
float check_right_angle(float, float, float);

int main(void)
{
    float side1, side2, side3;
    char pass;

    printf("Enter the three sides of the traingle separated by commas: ");
    scanf("%f, %f, %f", &side1, &side2, &side3);

    

    // isosceles traingles have atleast 2 sides of the triangles are equal

    ((side1 == side2 && (side1 !=side3)) || side2 == side3 && (side1 !=side2) || side1 == side3 && (side2 !=side3)) ? printf("Isosceles Traingle"): pass;

    // equilater triangles have sides of equal length
    (side1 == side2 && side2 == side3 && side1 == side3)? printf("Equilateral Triangle"): pass;

    //right- angled triangles are the largest side square is equal to the sum of the other two side squares

    if(check_right_angle(side1,side2,side3) == 0)
        printf("Right-angled Triangle");
    
    // scalene triangle has all three sides with different length and it is not right angled triangle

    ((side1 != side2  && side2 != side3 && side1 != side3) && (check_right_angle(side1,side2,side3) != 0))? printf("Scalene Triangle"): pass;

    return 0;
}
float check_right_angle(float a, float b, float c)
{
    float largest_side, rem_side1, rem_side2;
    (a>b) ? ((a>c)? (largest_side = a): (largest_side = c)) : ((b>c)? (largest_side = b): (largest_side = c));

    if(largest_side > a && largest_side > b)
    {
        rem_side1 = a;
        rem_side2 = b;
    }
    else if(largest_side > b && largest_side > c)
    {
        rem_side1 = b;
        rem_side2 = c;
    }
    else if(largest_side > a && largest_side > c)
    {
        rem_side1 = a;
        rem_side2 = c;
    }

    if(largest_side *largest_side == ((rem_side1*rem_side1) + ( rem_side2 * rem_side2))) 
        return 0 ;
    
    
    return -1;


}
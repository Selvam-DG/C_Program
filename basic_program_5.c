/*The length and breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the area 
and perimeter of the rectangle, and the area and circumference of 
the circle*/

#include <stdio.h>
// void rec_area(float, float);
// void rec_perimeter(float, float);
int main(void)
{
    float length, breadth, area, perimeter ;

    printf("Enter length, breadth of the rectangle : ");
    scanf("%f, %f",&length, &breadth);
    area = length * breadth ;
    printf("Area of Rectangle = %.2f \n", area);

    perimeter = 2* length * breadth ;
    printf("Perimeter of Rectangle = %.2f",perimeter);

    // rec_area(length,breadth);
    // rec_perimeter(length, breadth);


    return 0;
}

// rec_area(float a ,float b)
// {
//     return a*b;
// }

// rec_perimeter(float l, float b)
// {
//     return 2*l*b ;
// }
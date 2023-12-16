/*Given the length and breadth of a rectangle, write a program to find 
whether the area of the rectangle is greater than its perimeter. */

#include <stdio.h>
float area(float, float);
float perimeter(float, float);

int main(void)
{
    float length, breadth, area_of_rec, perimeter_of_rec;

    printf("Enter the length and breath of  a rectangle : ");
    scanf("%f, %f",&length, &breadth);
    area_of_rec =area(length, breadth);
    printf("\n%.2f", area_of_rec);
    perimeter_of_rec = perimeter(length, breadth);
    printf("\n%.2f", perimeter_of_rec);

    if( area_of_rec > perimeter_of_rec)
    {
        printf("\nArea of the rectangle with length = %.2f and breadth = %.2f is greater than its perimeter ", length, breadth);
    }
    else if(area_of_rec < perimeter_of_rec)
    {
        printf("\nArea of the rectangle  with length = %.2f and breadth = %.2f is less than its perimeter ", length, breadth);
    }
    else
        printf("\nArea of the rectangle  with length = %.2f and breadth = %.2f  is equal to  its perimeter ", length, breadth);
}

float area(float l, float b)
{
    float a;
    a = l *b ;
    return a;
}
float perimeter(float l, float b)
{
    float p,s;
    p = 2 * (l + b);
    // return p ;

    return  2 * (l + b);
}
/*Given three points  (x1, y1), (x2, y2) and (x3, y3), write a program 
to check if all the three points fall on one straight line.*/

// Equation of straight line is y = mx + c
// m = slope = (y2-y1) / (x2-x1)
// c = y-interept = y1 - ((y2-y1) / (x2-x1) *x1)

#include <stdio.h>

int main()
{
    float x1,y1,x2,y2,x3,y3, slope, intercept, collinear_check;

    printf("Enter the point (x1,y1) :");
    scanf("%f,%f", &x1, &y1);
    printf("Enter the point (x2,y2) :");
    scanf("%f,%f", &x2, &y2);
    printf("Enter the point (x3,y3) :");
    scanf("%f,%f", &x3, &y3);

    slope = (y2 - y1) / (x2 - x1);
    intercept = y1 - (slope*x1);

    printf("Equation of Straight line is y = %.2f *x + %.2f", slope, intercept);

    collinear_check = y3 - (slope * x3) - intercept ;

    (collinear_check == 0)? printf(" \nThree points lies falls on the straight line i.e, collinear") : printf("\nThree points are not collinear");

    // if (collinear_check == 0)
    // {
    //     printf("Three points lies falls on the straight line");
    // }
    // else
    //     printf("Three points are not collinear");
    
    return 0;

}

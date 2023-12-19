/* 
Given a point (x, y), write a program to find out if it lies on the X
axis, Y-axis or on the origin. */

#include <stdio.h>

int main()
{
    float x,y;
    printf("Enter the point(x,y)");
    scanf("%f, %f", &x,&y);

    if(x == 0 && y== 0)
    {
        printf("The point (%d, %d) lies on the Origin",(int) x, (int) y );
    }
    else if(x == 0)
    {
        printf("The point (%.2f, %.2f) lies on Y axis", x,y);
    }
    else if (y == 0)
    {
        printf("The point (%.2f, %.2f) lies on X axis ", x,y);
    }
    else
        printf ("The point (%.2f, %.2f) lies on XY plane", x,y);

    return 0;
}
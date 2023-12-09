/*
Paper of size A0 has dimensions 1189 mm x 841 mm. Each 
subsequent size A(n) is defined as A(n-1) cut in half parallel to its 
shorter sides. Thus paper of size A1 would have dimensions 841 
mm x 594 mm. Write a program to calculate and print paper sizes 
A0, A1, A2, … A8. */

#include <stdio.h>

int main()
{
    int length=1189, breadth =841, size, i= 0;
    // printf("A0 : %d x %d", length, breadth);

    while(breadth > 0)
    {
        if(length > breadth)
        {
            printf("Size of A%d : %d x %d \n",i, length, breadth);
        }
        size = length;
        length = breadth;
        breadth = size/2;
        i++;
    }

    return 0;
}
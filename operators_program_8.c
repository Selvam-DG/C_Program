/*Two numbers are input through the keyboard into two locations C 
and D. Write a program to interchange the contents of C and D. */

#include <stdio.h>
int swap(int*, int*);

int main()
{
    int c,d, temp;
    
    printf("Enter the values of c,d : ");
    scanf("%d,%d",&c,&d);
    // temp = c;
    // c = d;
    // d = temp;

    // printf("values of c,d after interchanged is %d, %d",c,d);
    
    swap(&c,&d);

    return 0;
}

int swap( int *c_new, int *d_new)
{
    int temp;
    temp = *c_new;
    *c_new =  *d_new;
    *d_new = temp;
    printf("values of c,d after interchanged is %d, %d",*c_new,*d_new);
    
    return temp;
}
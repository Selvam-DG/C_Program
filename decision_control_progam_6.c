/*If the ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three.  */

#include <stdio.h>

int chech_youngest (int,int,int);

int main()
{
    int ram_age, shyam_age, ajay_age;

    printf("Enter ages of Ram, Shyam and Ajay : ");
    scanf("%d, %d, %d", &ram_age, &shyam_age, & ajay_age);

    // (A<B) ? (A < C ? A : C ); (B < C ? B: C) ;

    if (ram_age < shyam_age)
    {
        if(ram_age < ajay_age)
        {
            printf("Ram is the Youngest of three");
        }
        else
        {
            printf("Ajay is the Youngest of three");
        }
    }
    else if ( shyam_age < ajay_age)
    {
        printf("Shyam is the youngest of three");

    }
    else
        printf("Ajay is the youngest of three");

    chech_youngest(ram_age,shyam_age,ajay_age);
    return 0;
}

int chech_youngest (int A, int B, int C)
{
    (A<B) ? (A < C ? printf("\nRam") : printf("\nAjay") ): (B < C ? printf("\nShyam"): printf("\nAjay")); 
}
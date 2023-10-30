/* A certain grade of steel is graded according to the following
conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600

The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of 
hardness, carbon content and tensile strength of the steel under 
consideration and output the grade of the steel.
*/

#include<stdio.h>
int main()
{
    float hs,cc,ts;
    int gr;

    printf("Enter steel Hardness, Carbon content, Tensile strength values :\n");
    scanf("%f,%f,%f",&hs,&cc,&ts);

    if (hs>50 && cc<0.7 && ts>5600 )
        gr = 10;
    else if (hs > 50 && cc < 0.7)
        gr = 9;
    else if (cc < 0.7 && ts > 5600)
        gr = 8;
    else if (hs > 50 && ts > 5600)
        gr = 7;
    else if (hs >50 || cc < 0.7 || ts > 5600)
        gr = 6;
    else 
        gr = 5;   
    

    printf("Grade of Carbon steel is: %d",gr);

    return 0;
}
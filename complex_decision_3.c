/*
A certain grade of steel is graded according to the following 
conditions: 
(i) Hardness must be greater than 50 
(ii) Carbon content must be less than 0.7 
(iii) Tensile strength must be greater than 5600 The grades are as follows: 
Grade is 10 if all three conditions are met 
Grade is 9 if conditions (i) and (ii) are met 
Grade is 8 if conditions (ii) and (iii) are met 
Grade is 7 if conditions (i) and (iii) are met 
Grade is 6 if only one condition is met 
Grade is 5 if none of the conditions are met 
Write a program, which will require the user to give values of 
hardness, carbon content and tensile strength of the steel under 
consideration and output the grade of the steel. */

#include <stdio.h>

int main()
{
    float hardness, carbon_content, Tensile_strength ;

    printf("Enter the steel content as shown below ");
    printf("\nEnter Hardness of the steel :");
    scanf("%f", &hardness);
    printf("Enter Carbob Content of the steel :");
    scanf("%f", &carbon_content);
    printf("Ebter Tensile strength of the steel :");
    scanf("%f", &Tensile_strength);

    if(hardness >50 && carbon_content < 0.7 && Tensile_strength > 5600 )
        printf("The Grade of carbon steel is 10");
    else if(hardness >50 && carbon_content < 0.7)
        printf("The Grade of carbon steel is 9");
    else if(carbon_content < 0.7 && Tensile_strength > 5600 )
        printf("The Grade of carbon steel is 8");
    else if (hardness >50  && Tensile_strength > 5600 )
        printf("The Grade of carbon steel is 7");
    else if(hardness >50 ||carbon_content < 0.7 || Tensile_strength > 5600 )
        printf("The Grade of carbon steel is 10");
    else 
        printf("The Grade of Carbon steel is 5");

    return 0;
}
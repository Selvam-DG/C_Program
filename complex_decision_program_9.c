/*The Body Mass Index (BMI) is defined as ratio of the weight of a 
person (in kilograms) to the square of the height (in meters). Write 
a program that receives weight and height, calculates the BMI, and 
reports the BMI category as per the following table:
BMI Category   BMI
 Starvation -   < 15
 Anorexic    15.1 to 17.5
 Underweight     17.6 to 18.5
 Ideal   18.6 to 24.9 
 Overweight     25 to 25.9
 Obese   30 to 30.9
 Morbidly Obes   >= 40
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float weight, height, BMI;
    // get the input from the user
    printf("Enter the Person's Weight in Kilograms: ");
    scanf("%f",&weight);

    printf("Enter the Person's Height in meters: ");
    scanf("%f", &height);

    BMI = weight / (double)sqrt(height);

    printf("%.2f\n", BMI);

    if (BMI < 1.5)
        printf("BMI Category = Starvation");
    else if (BMI >= 1.5 && BMI < 17.5)
        printf("BMI Category = Anorexic");
    else if (BMI >= 17.6 && BMI < 18.5)
        printf("BMI Category = Underweight");
    else if (BMI >= 18.6 && BMI < 24.9)
        printf("BMI Category = Ideal");
    else if (BMI >= 25 && BMI < 25.9)
        printf("BMI Category = Overweight");
    else if (BMI >= 26 && BMI < 30.9)
        printf("BMI Category = Obese");
    else
        printf("BMI Category = Morbidly Obese");


    return 0;

}
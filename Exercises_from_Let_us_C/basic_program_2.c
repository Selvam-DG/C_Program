/*The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance in 
meters, feet, inches and centimeters*/

#include <stdio.h>

int main()
{
    float kilometer_distance;
    float meter_distance, feet_distane, inches_distance, centimeter_distance;
    printf("Enter the distance between two cities in Kilometer: ");
    scanf("%f",&kilometer_distance);
    // distance from  kilometer to meter is multiply with 1000

    meter_distance = kilometer_distance * 1000 ;
    printf("\n Distance in Meter is  %.2f m", meter_distance);

    // distnce from kilometer to centimeter is mulitply meter_distance with 10

    centimeter_distance = meter_distance *100 ;
    printf("\n Distance in Centimeter is %.2f cm",centimeter_distance);

    // distance from kilometer to inches is divide centimeter by 2.54
    // 1 inch = 2.54 cm

    inches_distance = centimeter_distance / 2.54 ;
    printf("\n Distnance in Inches  is %.2f", inches_distance);

    // distance from kilometer to feets is divide the inches_distance by 12
    // 1 feet = 12 inches

    feet_distane = inches_distance / 12;

    printf("\n Distance in feet is %.2f", feet_distane);


    return 0;

}

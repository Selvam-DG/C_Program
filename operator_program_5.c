/* Write a program to receive values of latitude (L1, L2) and longitude 
(G1, G2), in degrees, of two places on the earth and output the 
distance (D) between them in nautical miles. The formula for 
distance in nautical miles is: 
D = 3963 cos-1 ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) ) */

#include <stdio.h>
#include <math.h>

int main()
{
    float latitude1, latitude2, longitude1,longitude2,distance;
    float L1,L2,G1,G2;
    printf("Enter the latitude(L1,L2) values seperated by comma : ");
    scanf("%f, %f",&latitude1,&latitude2);
    printf("Enter the longitude(G1,G2) values seperated by comma : ");
    scanf("%f, %f",&longitude1,&longitude2);

    // degree = radians*180/pi
    L1 = latitude1 *(3.1415/180);
    L2 = latitude2 *(3.1415/180);
    G1 = longitude1 *(3.1415/180);
    G2 = longitude2 *(3.1415/180);
    distance= 3963 * acos ( sin(L1) *sin(L2) + cos(L1)* cos(L2) * cos(G2 - G1) );

    printf("Distance in nautical miles = %f",distance);
    return 0;

}
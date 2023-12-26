/*In digital world colors are specified in Red-Green-Blue (RGB) format, 
with values of R, G, B varying on an integer scale from 0 to 255. In 
print publishing the colors are mentioned in Cyan-Magenta-Yellow
Black (CMYK) format, with values of C, M, Y, and K varying on a real 
scale from 0.0 to 1.0. Write a program that converts RGB color to 
CMYK color as per the following formulae: 
White = max( red/255, Green/255, Blue/255)
Cyan =( White- Red/255/ white)
Magenta =( White- Green/255/ white)
Yellow =( White- Blue/255/ white)
Black 1- white
Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1.*/

#include <stdio.h>

int main(void)
{
    int red, green, blue;
    float cyan, magenta, yellow, black, white;
    float r,g,b;
    printf("Enter the Red, Green, Blue values separated by comma :");
    scanf("%d, %d, %d", &red, &green, &blue);
    if((red >=0 && red<= 255) && (green >=0 && green<= 255) && (blue >=0 && blue<= 255) )
    {
        r = red/255.0;
        g = green/255.0;
        b = blue/255.0;

        

        (r > g)? ((r > b) ? (white = r): (white = b)) : ((g > b) ? (white = g) : (white = b));

        cyan = (white - r) / white ;
        magenta = (white - g)/ white ;
        yellow = (white - b) / white ;

        black = 1- white;

        printf("The C,M,Y and K values are C = %.2f, M = %.2f, Y = %.2f, K = %.2f", cyan, magenta, yellow, black);
    }
    else
        printf("Please enter the RGB values below 256");

    return 0;

}
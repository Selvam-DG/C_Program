/*Write a function that receives 5 integers and returns the sum, 
average and standard deviation of these numbers. Call this function 
from main( ) and print the results in main( ).*/

#include <stdio.h>
#include <math.h>


float stat (int,int,int,int,int,float*,float*,float*);


int main()
{
    int n1,n2,n3,n4,n5;
    float sum,avg,std;
    printf("Enter 5 integers seperated with space: \n");
    scanf("%d %d %d %d %d",&n1, &n2, &n3, &n4, &n5);

    stat(n1,n2,n3,n4,n5,&sum, &avg, &std);

    printf("%f\n%f\n%f\n",sum,avg,std);
    
    return 0;
}
float stat (int a,int b,int c,int d,int e,float*sum,float*avg,float*std)
{
    *sum = a+b+c+d+e;
    *avg = *sum/5;
    float cmd = pow((a-*avg),2) + pow((b-*avg),2) + pow((c-*avg),2) + pow((d-*avg),2) + pow((e-*avg),2);
    *std = sqrt(cmd/(5));

}
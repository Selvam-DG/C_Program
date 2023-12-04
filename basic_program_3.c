/*if the marks obtained by a student in five different subjects are 
input through the keyboard, write a program to find out the 
aggregate marks and percentage marks obtained by the student. 
Assume that the maximum marks that can be obtained by a student 
in each subject is 100.*/

#include <stdio.h>

int main(void)
{
    int marks[5];
    int sum = 0,sum1 =  0;
    float percentage;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the  subject-% dmarks obtained by the student out of 100 : ",i+1);
        scanf("%d",&marks[i]);
        sum = sum + marks[i];
    }
    for(int j = 0; j < 5 ; j++)
    {
        sum1 = sum1 + marks[j];
    }

    printf("Aggregate marks obtained by student is %d\n", sum);
    percentage = (sum / 500.00) *100 ;
    printf("Percentage obtained by student is %.2f", percentage);
    
    return 0;

}
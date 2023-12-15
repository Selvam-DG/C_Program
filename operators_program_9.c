/*
Consider a currency system in which there are notes of six
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If 
a sum of Rs. N is entered through the keyboard, write a program to 
compute the smallest number of notes that will combine to give Rs. 
N. */
#include <stdio.h>

int main()
{
    int sum,count_100=0, count_50= 0, count_10 =0, count_5 =0, count_2 =0, count_1 =0;
    printf("Enter the sum of amount: ");
    scanf("%d",&sum);
    int temp;
    temp = sum;
    while(sum >0)
    {    
        if(sum >= 100 )
        {
            count_100+=1;
            sum = sum-100;
        }
        else if (sum>=50)
        {
            count_50+=1;
            sum = sum-50;
        }
        else if (sum>=10)
        {
            count_10+=1;
            sum = sum-10;
        }
        else if (sum>=5)
        {
            count_5+=1;
            sum = sum-5;
        }
        else if (sum>2)
        {
            count_2+=1;
            sum = sum-2;
        }
        else if (sum>=1)
        {
            count_1+=1;
            sum = sum-1;
        }
    }

    printf("Te smallest number of notes that add to give sum of %d is ",temp);
    printf("\n100- %d; 50 - %d; 10 - %d; 5 - %d, 2- %d, 1 - %d",count_100,count_50,count_10,count_5,count_2,count_1);
    if(count_100 >0)
        printf("\n100- %d",count_100);
    if(count_50 >0)
        printf("\n50- %d",count_50);
    if(count_10 >0)
        printf("\n10- %d",count_10);
    if(count_5 >0)
        printf("\n5 - %d",count_5);
    if(count_2 >0)
        printf("\n2- %d",count_2);
    if(count_1 >0)
        printf("\n1- %d",count_1);

    return 0;


}
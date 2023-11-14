#include <stdio.h>

int main(void)
{
    int number,i;
    printf("Enter the array size: ");
    scanf("%d",&number);

    int array_ele[number];
    for(int i = 0; i<number; i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&array_ele[i]);
    }
    int temp;
    for(int j = 0; j<number-1; j++)
    {
        if(array_ele[j]>array_ele[j+1])
        {
            temp = array_ele[j+1];
            array_ele[j+1] = array_ele[j];
            array_ele[j] = temp;
            for(int k =j;k>0;k--)
            {
                if(array_ele[k-1]>array_ele[k])
                {
                    temp = array_ele[k-1];
                    array_ele[k-1]= array_ele[k];
                    array_ele[k] = temp;

                }
            }
        
        }
    }
    printf("The insertion sorted array is:");
    for(i =0;i< number;i++)
    {
        printf("\n%d",array_ele[i]);
    }
    return 0;

}
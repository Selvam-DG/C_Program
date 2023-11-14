/* bubble sort means comparing the adjacent elements and push the largest element to the
end of the array
*/

#include <stdio.h>

int main()
{
    int number,i,j,temp;
    printf("Enter the array size:");
    scanf("%d",&number);
    
    int array_ele[number];

    for(i= 0;i<number;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&array_ele[i]);
    }

    // bubble sort

    for(i = 0; i< number; i++)
    {
        for(j =0;j<(number-i-1);j++)
        {
            if(array_ele[j]>array_ele[j+1])
            {
                temp = array_ele[j];
                array_ele[j] = array_ele[j+1];
                array_ele[j+1] = temp;
                printf("Iteration J with condition; %d\n",j);
            }
            printf("Iteration j\n");
        }
        printf("Iteration I = %d\n",i);
    }
    printf("The sorted array is:");

    for(i = 0; i< 5; i++)
    {
        printf("%d\n",array_ele[i]);
    }
    return 0;
}
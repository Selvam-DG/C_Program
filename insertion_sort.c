#include <stdio.h>

int main(void)
{
    // Get the number of elements in the array
    int number,i;
    printf("Enter the array size: "); 
    scanf("%d",&number);
    // create a array and get the values from the user
    int array_ele[number];
    for(int i = 0; i<number; i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&array_ele[i]);
    }
    int temp;
    for(int j = 0; j<number-1; j++)
    {
        // compare adjacent values in the array
        if(array_ele[j]>array_ele[j+1])  // if condition satisfies, swap the values
        {
            temp = array_ele[j+1];
            array_ele[j+1] = array_ele[j];
            array_ele[j] = temp;

            // again check the swapped value with the previously swapped values.... continue to initial value of array
            for(int k =j ; k>0; k--)
            {
                if(array_ele[k-1]>array_ele[k])  // if condtion satisty, again swap the values
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
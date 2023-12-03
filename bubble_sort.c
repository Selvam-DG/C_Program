/* bubble sort means comparing the adjacent elements and push the largest element to the
end of the array
*/

#include <stdio.h>

int main()
{
    int number,i,j,temp;
    
    printf("Enter the array size:");
    scanf("%d",&number);
    //taking array elements from the user
    int array_ele[number];

    for(i= 0;i<number;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&array_ele[i]);
    }

    // bubble sort
    // compare adjacent elements and swap values if condition satisfies.
    // largest value in the array goes to the end of array

    for(i = 0; i< number; i++)  
    {
        //instead of checking with all the elements, compare with adjacent elements
        // first element  compare with the next element in array
        for(j =0;j<(number-i-1);j++)

        {
            if(array_ele[j] > array_ele[j+1])
            {
                temp = array_ele[j];
                array_ele[j] = array_ele[j+1];
                array_ele[j+1] = temp;
            }
        }
    }
    printf("The sorted array is:");

    for(i = 0; i< 5; i++)
    {
        printf("%d\n",array_ele[i]);
    }
    return 0;
}
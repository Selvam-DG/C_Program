#include <stdio.h>
# define SIZE 5
//selection_sort(int *,int);
int main()
{
    int number;
    int i;
    int temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&number);

    int sample_array[number];
    
    //  taking the values of array elements from the user
    for(i = 0; i < number; i++)
    {
        printf("Enter the value: ");
        scanf("%d",&sample_array[i]);
    }
    
    //selection_sort(&sample_array[0],SIZE);
    // comparing one element with all other element inside the array
    // if element is greater than the next element swap the element with the other element
    

    for (i = 0; i < number; i++)    // smallest vaalue in the array comes to the first value of the array
    {
        for (int j =i+1; j < number; j++)
        {
            if (sample_array[i] > sample_array[j])
            {
                temp = sample_array[i];
                sample_array[i] = sample_array[j];
                sample_array[j] = temp;

               // printf("iteration_j %d\n",j);
            }
        }
       // printf("\tIteration i : %d\n",i);   
    }
    for(i = 0; i < number; i++)
    {
        printf("%d\n",sample_array[i]);
    }
    return 0;
}


//selection_sort(int *array_num, int len)

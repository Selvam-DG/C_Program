/*Twenty-five numbers are entered from the keyboard into an array. 
* The number to be searched is entered through the keyboard by the 
* user. Write a program to find if the number to be searched is 
* present in the array and if it is present, display the number of times 
* it appears in the array. */

// Pseudocode
// 1. getting input from the user and store the values in array
// 2. Compare each element in array with all other element in array
// 3. if the condition is true store the value in another variable and count the values if the value repeats

#include <stdio.h>
# define Array_size 5        // defining Macro Expansion

int number_search(int);  // declare a function to search the number in the array
int main()
{
    int arr[Array_size]; // declared array size of 25 elements
    int i,n;
    int count=0;

    //Get inputs from the user
    for (i=0;i<Array_size;i++)
    {
        printf("Enter the Number%d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for (i=0;i<Array_size;i++)
    {
        printf("your entered is %d: \n ",arr[i]);
        
    }
    printf("Enter the number you want to search in array: ");
    scanf("%d",&n);
    // number_search(n);
    for (i=0;i<Array_size;i++)
    {
        if (n == arr[i] )
        {
             count = count+1;
            // printf("y");
            //break;
        }
        else
        {
            //count = count*0;
            //printf("N");
            continue;

        }
    }
    (count > 0)?printf("Yes"):printf("No");
    
    
    return 0;

    
}

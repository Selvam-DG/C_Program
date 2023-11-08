/*Ten numbers are entered from the keyboard into an array. 
* The number to be searched is entered through the keyboard by the 
* user. Write a program to find if the number to be searched is 
* present in the array and if it is present, display the number of times 
* it appears in the array. */

// Pseudocode
// 1. getting input from the user and store the values in array
// 2. Compare each element in array with all other element in array
// 3. if the condition is true store the value in another variable and count the values if the value repeats

#include <stdio.h>

# define Array_size 10       // defining Macro Expansion

int number_search(int *, int, int);  // declare a function to search the number in the array

int main()
{
    int arr[Array_size]; // declared array size of 25 elements
    int i,number;
    int count=0;

    //Get inputs from the user
    for (i=0;i<Array_size;i++)
    {
        printf("Enter the Number%d : ",i+1);
        scanf("%d",&arr[i]);
        // storing values in array
    }
    // Get the number from the user to be searched in the array

    printf("Enter the number you want to search in array: ");
    scanf("%d",&number);
    number_search(&arr[0],Array_size,number);

    // Funtion is called by using pointer(also known as call by reference
    
    return 0;    
}

int number_search (int *numb,int size,int check_num )
{
    int Count =0;
    // check the number with all the elements in the array
    for(int k = 0; k< size;k++)
    {
        if(*numb == check_num)
        {
           // If condition satisfies, increment the value by 1
            Count = Count+1;
            ;

        }
        // increment the numb to the next element in the array
        numb++;
    }
    // Conditional statement
    // if condition statisfied? print  first statment : else print second statement

    (Count > 0)?printf("Yes,Your searching number is in the array"):printf("No, Sorry! The number can't found in Array");

    // Print the value that the times of searching elements in array
    if (Count > 0)
       printf("\n%d times the number %d is in the array",Count,check_num);

}
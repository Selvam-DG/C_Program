/*Write a program to enter numbers till the user wants. At the end it 
should display the count of positive, negative and zeros entered. */


#include <stdio.h>

int main()
{
    int number;
    int postive_count =0, negative_count =0, zero_count =0;
    char choice;
    choice = 'y';
    
    do
    {
        printf("Ente the number: ");
        scanf("%d", &number);
        
        if(number > 0)
        {
            postive_count ++;
        }
        else if (number < 0)
        {
            negative_count ++;
        }
        else
        {
            zero_count ++;
        }
        // else
        // {
        //     printf("Sory, you have entered invalid number");
        //     break;
        // }
        
        printf("Do you want to continue? Type 'y ' to continue or 'n' to quit : " );

        scanf("\n%c", &choice); // why space is in this scanf 
        // If space or \n not mentioned before %c, the scanf treat \n as input and execute the program

    } while (choice == 'y' || choice == 'Y');
    
    printf("\npostive_count - %d", postive_count);
    printf("\nNegative_count - %d", negative_count);
    printf("\nzero_count - %d", zero_count);
    
    return 0;


}
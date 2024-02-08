/*Write a program to find the grace marks for a student using switch. 
The user should enter the class obtained by the student and the 
number of subjects he has failed in. Use the following logic: 
 If the student gets first class and the number of subjects he 
failed in is greater than 3, then he does not get any grace. 
Otherwise the grace is of 5 marks per subject. 
 If the student gets second class and the number of subjects he 
failed in is greater than 2, then he does not get any grace. 
Otherwise the grace is of 4 marks per subject. 
 If the student gets third class and the number of subjects he 
failed in is greater than 1, then he does not get any grace. 
Otherwise the grace is of 5 marks. 
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int grade, fail,grace;
    printf("Enter the class obtained by the student \n 1- First class,\n 2- Second class, \n 3-Third Class: ");
    scanf("%d", &grade);
    // grade = strlwr(grade);
   
    // if( grade == 1)
    // {
    //     if(fail > 3)
    //         printf("The student does not get any grace");
    //     else
    //         printf("The student get 5 grace marks per subject ");
    // }
    // else if( grade == 2 )
    // {
    //     if(fail > 2)
    //     {
    //         printf("The student does not get any grace");
    //     }
            
    //     else
    //         printf("The student get 4 grace marks per subject ");
    // }
    // else if( grade == 3)
    // {
    //     if( fail > 1)
    //         printf("The student does not get any grace");
    //     else
    //         printf("The student get 5 grace marks ");
    // }
    // else
    //     printf("The student grade is not correct");
    
    // student belong to which class either first class, second class or third class
    while(grade >0 && grade <<4)
    {
        printf("Enter the number of subject failed by the student: ");
        scanf("%d", &fail);
    }
    else 
        printf("Grade is invalid");
    
    switch(grade)
    {
        case 1:
            printf("The Student obtained  first class");
            // How many subjects failed by the students
            switch (fail)
            {
                case 0:
                case 1:
                case 2:
                case 3:
                    printf("\n No marks are awarded");
                    break;
                default:
                    printf("\n 5 marks are awared");
                    break;
            }
        break;
        case 2:
            printf("The Student obtained second class");
            switch (fail)
            {
                case 0:
                case 1:
                case 2:
                    printf("No marks are awarded");
                    break;
                
                default:
                    printf("4 marks awarded per subject");
                    break;
            }
            break;
        case 3:
            printf("The Student obtained Third Class");
            switch (fail)
            {
                case 0:
                case 1:
                    printf("No marks are awarded");
                    break;
                
                default:
                    printf("The student get 5 grace marks ");
                    break;
            }
            break;
        default:
            printf("You are not pass");    
            break;

    }
    return 0;
}
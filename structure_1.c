/*Create a structure to specify data on students given below: 
Roll number, Name, Department, Course, Year of joining 
Assume that there are not more than 450 students in the college. 
(1) Write a function to print names of all students who joined in a 
particular year. 
 
(2) Write a function to print the data of a student whose roll 
number is received by the function. */

#include <stdio.h>
#include <conio.h>
struct student
{
    int roll_no;
    char name[30];
    char dept[30];
    char course[30];
    int year;

}; 
int n;

void student_by_year(struct student*, int);

void details_by_id(struct student, int);



int main()
{
    struct student s[450];
    int yr;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    if (n <= 0)
    {
        printf("Negative or zero values are invalid!!!! ");
    }
    else
    {
        for (int i =0; i< n; i++)
        {
            printf("Enter Student id: ");
            scanf("%d",&s[i].roll_no);
            printf("Enter Student Name: ");
            scanf("%s",&s[i].name);
            printf("Enter Student's Department: ");
            scanf("%s",&s[i].dept);
            printf("Enter Student's Course: ");
            scanf("%s",&s[i].course);
            printf("Enter Student Year of Joining: ");
            scanf("%d",&s[i].year);
        }
    }
    for (int j=0; j<n; j++)
    {
        printf("%d, %s, %s ,%s, %d", s[j].roll_no,s[j].name,s[j].dept,s[j].course,s[j].year);
    }

    printf("\n Enter the year to see the sstudents name who are joined in that particular year: ");
    scanf("%d",&yr);
    student_by_year(&s[n], yr);

    return 0;

}

void student_by_year(struct student *s ,  int year)
{
    // printf("\n%s",s->name);
    // if (year == s->year)
    // {
    //     printf("\n%s",s->name);

    // }
    // else{
    //     printf("\n no students joined that particular year");
    // }
    for (int j=0; j<n; j++)
    {
        printf("%d, %s, %s ,%s, %d", s->roll_no,s->name,s->dept,s->course,s->year);
    }
    

}
/* Write a recursive function to obtain the first 25 numbers of a 
Fibonacci sequence. In a Fibonacci sequence the sum of two 
successive terms gives the third term. Following are the first few 
terms of the Fibonacci sequence:
1 1 2 3 5 8 13 21 34 55 89... */

#include <stdio.h>
int fibb(int);   // declaring a function for Fibonacci series
int main()
{
    int n,fib;
    do{
        printf("Enter the number:\n");
        scanf("%d",&n);
    }while (n<=0);         // checking whether user eneterd positive value
    
    for(int k=0;k<n;k++)       // generate the Fibonacci series for n values 
    {
         fib = fibb(k);
    
         printf("%d\n",fib);
    }
    return 0;
}

int fibb(int m)
{
    int fb;
    // base values
    if (m==0 || m==1)
    return m;

    // recursive till reach reach base values
    fb = fibb(m-2) + fibb(m-1);
    return (fb);


/*    for (i=0;i<n;i++)  // Normal generation of fibonacci
    {
        printf("%d",a);
        fb = a+b;
        a = b;
        b = fb;
     
    }
  */  
}
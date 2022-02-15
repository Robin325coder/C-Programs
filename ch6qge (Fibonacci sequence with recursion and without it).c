/* Fibonacci Sequence using recursion and also without it */

#include<stdio.h>
#include<stdlib.h>

void recfib(int);

int main()
{
    int n;
    /*int a=-1, b=1, c, i;*/
    printf("Enter how many Fibonacci numbers you want to print: ");
    scanf("%d", &n);
    recfib(n);
    /*for(i=0; i<n; i++)
    {
        c=a+b;
        printf("%d, ", c);
        a=b;
        b=c;
    }*/
    return 0;
}

void recfib(int n)
{
    static int a=-1, b=1;
    int c;
    if(n==0)
    {
        exit(0);
    }
    else
    {
        c=a+b;
        printf("%d, ", c);
        a=b;
        b=c;
        recfib(n-1);
    }    
}
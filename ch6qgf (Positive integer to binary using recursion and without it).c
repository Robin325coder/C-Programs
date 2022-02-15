/* Positive Integer to Binary using recursion and without it */

#include<stdio.h>
#define BASE 2

int power(int);
int recbin(int);

int main()
{
    int n, num;
    /*int a, num=0, i=0;*/
    printf("Enter a number: ");
    scanf("%d", &n);
    num = recbin(n);
    /*while(n)
    {
        a = n % BASE;
        num += (a * power(i));
        i++;
        n = n / BASE;
    }*/
    printf("%d", num);
    return 0;
}

int power(int i)
{
    int exp=1, j;
    for(j=0; j<i; j++)
    {
        exp *= 10;
    }
    return exp;
}

int recbin(int n)
{
    static int num=0, i=0;
    int a;
    if(n==0)
    {
        return 0;
    }
    else
    {
        a = n % BASE;
        num += (a * power(i));
        i++;
        recbin(n / BASE);
    }
    return num;
}
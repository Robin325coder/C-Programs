/* Recursive function for sum of digits calculation */

#include<stdio.h>

int rec(int);

int main()
{
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = rec(n);
    printf("Sum of digits: %d", sum);
    return 0;
}

int rec(int n)
{
    int s;
    if(!n)
        return 0;
    else
        s = (n%10) + rec(n/10);
    return s;
}
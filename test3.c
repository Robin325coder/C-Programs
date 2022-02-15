#include<stdio.h>
int rec(int);
int main()
{
    int fact, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact = rec(num);
    printf("Sum: %d", fact);
    return 0;
}

int rec(int x)
{
    int f;
    if(x==1)
        return 1;
    else
    {
        f = x + rec(x-1);
    }
    return f;
}
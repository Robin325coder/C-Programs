#include<stdio.h>
int main()
{
    int num, i, fact=1;
    printf("Factorial of a Number:\n\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=num; i>0; i--)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d", num, fact);
    return 0;
}
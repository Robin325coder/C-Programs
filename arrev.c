#include<stdio.h>
int main()
{
    int n, i, j, a[10], b[10];
    printf("Array Reversing:\n");
    printf("Enter number of numbers you want to enter: ");
    scanf("%d", &n);
    printf("Enter numbers in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Your input array: ");
    for(i=0; i<n; i++)
    {
        printf("%d, ", a[i]);
    }
    for(i=n-1, j=0; i>=0, j<n; i--, j++)
    {
        b[j]=a[i];
    }
    printf("\nReversed array: ");
    for(i=0; i<n; i++)
    {
        printf("%d, ", b[i]);
    }
    return 0;
}
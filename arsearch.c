#include<stdio.h>
int main()
{
    int n, i, a[15], num, count=0;
    printf("Array Searching:\n");
    printf("Enter number of numbers you want to enter (max 15): ");
    scanf("%d", &n);
    printf("Enter the numbers in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Your input array: ");
    for(i=0; i<n; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\nEnter the number you want to search: ");
    scanf("%d", &num);
    for(i=0; i<n; i++)
    {
        if(num==a[i])
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("%d is not present in the input array", num);
    }
    else
    {
        printf("%d is present in the array\n", num);
        printf("It appears %d times", count);
    }
    return 0;
}
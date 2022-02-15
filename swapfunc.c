#include<stdio.h>
void swap(int, int);
int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    swap(a, b);
    return 0;
}

void swap(int x, int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("Swapped numbers: %d and %d", x, y);
}

#include<stdio.h>
float product(float, int);
int main()
{
    int b;
    float a, p;
    printf("Enter a real number: ");
    scanf("%f", &a);
    printf("Enter an integer: ");
    scanf("%d", &b);
    p=product(a, b);
    printf("Product: %f", p);
    return 0;
}

float product(float x, int y)
{
    float prod;
    prod = x * y;
    return prod;
}
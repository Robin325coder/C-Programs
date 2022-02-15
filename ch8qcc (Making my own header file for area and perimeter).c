/* Making my own header file containing #define for area and perimeter */

#include"areaperi.h"
#include<stdio.h>

int main()
{
    int r;
    float area, cir;
    printf("Enter radius: ");
    scanf("%d", &r);
    area = CIRCAREA(r);
    cir = CIRCPERI(r);
    printf("%f is area\n", area);
    printf("%f is circumference\n", cir);
    return 0;
}
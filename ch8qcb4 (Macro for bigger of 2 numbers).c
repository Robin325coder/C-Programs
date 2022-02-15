/* Macro for bigger of two numbers */

#include<stdio.h>
#define BIGGER(x, y) {\
                        if(x>y)\
                            printf("%f is bigger", x);\
                        else\
                            printf("%f is bigger", y);\
                     }

int main()
{
    float x, y;
    printf("Enter a number: ");
    scanf("%f", &x);
    printf("Enter other number: ");
    scanf("%f", &y);
    BIGGER(x, y);
    return 0;
}
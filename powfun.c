#include<stdio.h>
float power(float, float);
 int main()
 {
    float a, b, p;
    printf("Enter base: ");
    scanf("%f", &a);
    printf("Enter exponent: ");
    scanf("%f", &b);
    p=power(a, b);
    printf("Power of %f raised to %f is %f", a, b, p);
    return 0;
 }

 float power(float x, float y)
 {
     float z=1;
     for(int i=0; i<y; i++)
     {
         z = z * x;
     }
     return z;
 }
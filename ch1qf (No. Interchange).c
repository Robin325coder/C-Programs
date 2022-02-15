#include<stdio.h>
int main()
{
  float a, b, c;
  printf("NUMBER INTERCHANGE:\n\n");
  printf("Enter the value of a: ");
  scanf("%f", &a);
  printf("Enter the value of b: ");
  scanf("%f", &b);
  printf("The numbers before interchanging are %f %f\n", a, b);
  c=a;
  a=b;
  b=c;
  /*a=a+b;
  b=a-b;
  a=a-b;*/
  printf("The input numbers are interchanged as %f %f", a, b);
  return 0;
}

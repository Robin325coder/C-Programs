#include<stdio.h>
int main()
{
  float p, r, t, I;
  printf("Enter the value of p: ");
  scanf("%f", &p);
  printf("Enter the value of r: ");
  scanf("%f", &r);
  printf("Enter the value of t: ");
  scanf("%f", &t);
  I=((p*r*t)/100);
  printf("Simple interest: %f", I);
  return 0;
}

#include<stdio.h>
void sumavg(float, float, float, float, float, float*, float*);
int main()
{
  float a, b, c, d, e, s, av;
  printf("SUM & AVERAGE OF 5 NUMBERS:\n\n");
  printf("Enter five numbers: ");
  scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
  sumavg(a, b, c, d, e, &s, &av);
  printf("Sum: %f\n", s);
  printf("Average: %f", av);
  return 0;
}

void sumavg(float a, float b, float c, float d, float e, float*sum, float*average)
{
  *sum=a+b+c+d+e;
  *average=(*sum)/5;
}
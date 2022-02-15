#include<stdio.h>
int main()
{
  float s1, s2, s3, s4, s5, sum, per;
  printf("AGGREGATE MARKS AND PERCENTAGE:\n\n");
  printf("Enter the marks of five subjects (out of 100): ");
  scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
  sum=s1+s2+s3+s4+s5;
  per=(sum/500)*100;
  printf("The aggregate marks are: %f\n", sum);
  printf("The percentage is: %f percent", per);
  return 0;
}

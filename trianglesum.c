#include<stdio.h>
int main()
{
  float a, b, c, sum;
  printf("TRIANGLE VALIDITY:\n\n");
  printf("Enter three angles of a triangle: ");
  scanf("%f %f %f", &a, &b, &c);
  sum=a+b+c;
  sum==180? printf("Triangle is valid") : printf("Triangle is not valid");
  return 0;
}

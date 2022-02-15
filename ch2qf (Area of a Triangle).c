#include<stdio.h>
#include<math.h>
int main()
{
  float a, b, c, s, area;
  printf("AREA OF A TRIANGLE\n\n");
  printf("Enter the length of 3 sides of a triangle: ");
  scanf("%f %f %f", &a, &b, &c);
  s=(a+b+c)/2.0;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("Area= %f", area);
  return 0;
}

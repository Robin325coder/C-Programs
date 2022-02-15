#include<stdio.h>
#include<math.h>
int power(int, int);
int main()
{
  int a, b, c;
  printf("POWER OF A NUMBER:\n\n");
  printf("Enter mantissa: ");
  scanf("%d", &a);
  printf("Enter exponent: ");
  scanf("%d", &b);
  c=power(a, b);
  printf("%d raised to power %d equals %d", a, b, c);
  return 0;
}

int power(int x, int y)
{
  int z;
  z=pow(x, y);
  return z;
}

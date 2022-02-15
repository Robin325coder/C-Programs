#include<stdio.h>
int main()
{
  int a, b, c, d, e, f, g, h, i, j, k;
  printf("REVERSE OF A FIVE DIGIT NUMBER:\n\n");
  printf("Enter a five digit number: ");
  scanf("%d", &a);
  b=a%10; //ten thousands place digit
  c=a/10;
  d=c%10; //thousands place digit
  e=c/10;
  f=e%10; //hundreds place digit
  g=e/10;
  h=g%10; //tens place digit
  i=g/10;
  j=i%10; //ones place digit
  k=(10000*b)+(1000*d)+(100*f)+(10*h)+j;
  printf("Number is reversed: %d", k);
  return 0;
}

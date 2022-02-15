#include<stdio.h>
int main()
{
  int a, b, c=0, i;
  printf("SUM OF DIGITS OF A NUMBER:\n\n");
  printf("Enter a five digit number: ");
  scanf("%d", &a);
  for(i=0; i<5; i++)
  {
     b=a%10;
     a=a/10;
     c+=b;
  }
  printf("The sum of digits is %d.", c);
  return 0;
}

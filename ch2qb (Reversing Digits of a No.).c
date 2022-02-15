#include<stdio.h>
int main()
{
  int a, b, i;
  printf("REVERSING DIGITS OF A NUMBER:\n\n");
  printf("Enter a five digit number: ");
  scanf("%d", &a);
  printf("Reversed number: ");
  for(i=0; i<5; i++)
  {
     b=a%10;
     a=a/10;
     printf("%d", b);
  }
  return 0;
}

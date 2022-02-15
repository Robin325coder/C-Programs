#include<stdio.h>
int main()
{
  int a, b;
  printf("SUM OF FIRST AND LAST DIGIT OF A NUMBER:\n\n");
  printf("Enter a four digit number: ");
  scanf("%d", &a);
  b=a%10;
  a=a/1000;
  printf("Sum of first and last digit is: %d", (b+a));
  return 0;
}

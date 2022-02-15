#include<stdio.h>
int main()
{
  int a, i, mult;
  printf("MULTIPLICATION TABLE:\n\n");
  printf("Enter a number: ");
  scanf("%d", &a);
  for(i=1; i<=10; i++)
  {
    mult=a*i;
    printf("%d * %d = %d\n", a, i, mult);
  }
  return 0;
}

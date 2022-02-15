#include<stdio.h>
int main()
{
  int a, i, j, flag=1;
  printf("NUMBER RAISED TO SOME POWER:\n\n");
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &i);
  for(j=0; j<i; j++)
  {
    flag*=a;
  }
  printf("%d^%d = %d", a, i, flag);
  return 0;
}

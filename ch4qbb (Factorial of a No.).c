#include<stdio.h>
int main()
{
  int a, i, fac=1;
  printf("FACTORIAL OF A NUMBER:\n\n");
  printf("Enter a number: ");
  scanf("%d", &a);
  for(i=0; i<a; i++)
  {
    fac*=(a-i);
  }
  /*for(i=a; i>0; i--)
  {
    fac*=i;
  }*/
  printf("Factorial of %d is %d", a, fac);
  return 0;
}

#include<stdio.h>
int main()
{
  int a;
  printf("ODD-EVEN NUMBER CHECK:\n\n");
  printf("Enter a number: ");
  scanf("%d", &a);
  a%2==0? printf("Even number") : printf("Odd number");
  /*if(a%2==0)
  {
    printf("Even number");
  }
  else
  {
    printf("Odd number");
  }*/
  return 0;
}

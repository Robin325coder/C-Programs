#include<stdio.h>
int main()
{
  int num, i;
  printf("PRIME NUMBERS:\n\n");
  printf("2, ");
  for(num=3; num<=300; num++)
  {
    for(i=2; i<=num-1; i++)
    {
      if(num%i==0)
      {
        break;
      }
    }
    if(i==num)
    {
      printf("%d, ", num);
    }
  }
  return 0;
}

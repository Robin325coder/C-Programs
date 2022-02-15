#include<stdio.h>
int main()
{
  int n, i, j, k, l;
  printf("HOLLOW TRIANGLE PRINTING:\n\n");
  printf("Enter a number: ");
  scanf("%d", &n);
  for(i=0; i<n-1; i++)
  {
    for(j=1; j<n-i; j++)
    {
      printf(" ");
    }
    printf("*");
    for(k=0; k<i; k++)
    {
      printf(" ");
    }
    for(l=1; l<i; l++)
    {
      printf(" ");
    }
    if(i!=0)
    {
      printf("*");
    }
    printf("\n");
  }
  while(n)
  {
    printf("* ");
    n--;
  }
  return 0;
}

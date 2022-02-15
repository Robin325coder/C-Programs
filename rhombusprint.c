#include<stdio.h>
int main()
{
  int n, i, j, k;
  printf("RHOMBUS PRINTING:\n\n");
  printf("Enter a number: ");
  scanf("%d", &n);
  for(i=0; i<n; i++)
  {
    for(j=1; j<n-i; j++)
    {
      printf(" ");
    }
    for(k=i; k>=0; k--)
    {
      printf("* ");
    }
    printf("\n");
  }
  for(i=0; i<n-1; i++)
  {
    for(j=0; j<=i; j++)
    {
      printf(" ");
    }
    for(k=0; k<n-i-1; k++)
    {
      printf("* ");
    }
    printf("\n");
  }
}

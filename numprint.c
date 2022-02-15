#include<stdio.h>
int main()
{
  int n, i, j, k, l, num=0, inc;
  printf("NUMBER PRINTING:\n\n");
  printf("Enter a number: ");
  scanf("%d", &n);
  for(i=0; i<n; i++)
  {
    inc=2*i;
    l=inc/2;
    for(j=1; j<n-i; j++)
    {
      printf(" ");
    }
    for(k=i; k>=0; k--)
    {
      num++;
      printf("%d ", (l+num));
    }
    num--;
    printf("\n");
  }
  return 0;
}

#include<stdio.h>
void prfac(int);
int main()
{
  int n;
  printf("PRIME FACTORISATION:\n\n");
  printf("Enter a number: ");
  scanf("%d", &n);
  prfac(n);
  return 0;
}

void prfac(int n)
{
  int i, j;
  for(i=2; i<=n; i++)
  {
    for(j=2; j<=i-1; j++)
    {
      if(i%j==0)
      {
        break;
      }
    }
    if(i==j)
    {
      for(n; n%i==0; )
      {
        printf("%d, ", i);
        n=n/i;
      }
    }
  }
}
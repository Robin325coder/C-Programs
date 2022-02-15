#include<stdio.h>
int main()
{
  int n, i, j, k, l, m;
  printf("ALPHABET PATTERN:\n\n");
  printf("Enter an odd number: ");
  scanf("%d", &n);
  if(n%2==0)
  {
    printf("Not an odd number.");
  }
  else
  {
    for(i=65; i<65+n; i++)
    {
      printf("%c ", i);
    }
    for(i=65+n-2; i>=65; i--)
    {
      printf("%c ", i);
    }
    printf("\n");
    for(i=0; i<n-1; i++)
    {
      for(j=65; j<65+n-i-1; j++)
      {
        printf("%c ", j);
      }
      for(k=0; k<=i; k++)
      {
        printf("  ");
      }
      if(i!=0)
      {
        for(l=0; l<i; l++)
        {
          printf("  ");
        }
      }
      for(m=65+n-i-2; m>=65; m--)
      {
        printf("%c ", m);
      }
      printf("\n");
    }
  }
  return 0;
}

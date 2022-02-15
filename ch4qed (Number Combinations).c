#include<stdio.h>
int main()
{
  int n, i, j, k, l, fac1=1, fac2, fac3, fac;
  printf("NUMBER COMBINATIONS:\n\n");
  printf("Enter a number: ");
  scanf("%d", &n);
  for(j=n; j>0; j--)
  {
    if(j==0)
    {
      fac1=1;
    }
    else
    {
      fac1*=j;
    }
  }
  for(i=0; i<n; i++)
  {
    fac2=1;
    fac3=1;
    for(k=i; k>0; k--)
    {
      if(k==0)
      {
        fac2=1;
      }
      else
      {
        fac2*=k;
      }
    }
    for(l=(n-i); l>0; l--)
    {
      if(l==0)
      {
        fac3=1;
      }
      else
      {
        fac3*=l;
      }
    }
    fac=(fac1)/((fac2)*(fac3));
    printf("Number of combinations of when %d things are taken at a time: %d\n", i, fac);
  }
  return 0;
}

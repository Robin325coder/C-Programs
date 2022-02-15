#include<stdio.h>
int main()
{
  int n, i, j, k, l, m, p, fac, fac1, fac2, fac3;
  printf("PASCAL/'S TRIANGLE:\n\n");
  printf("Enter a number: ");
  scanf("%d", &n);
  for(i=0; i<n; i++)
  {
    for(j=1; j<n-i; j++)
    {
      printf(" ");
    }
    for(k=0; k<=i; k++)
    {
      fac1=1;
      fac2=1;
      fac3=1;
      if(i==0)
      {
        fac1=1;
      }
      else
      {
        for(l=i; l>0; l--)
        {
          fac1*=l;
        }
      }
      if(k==0)
      {
        fac2=1;
      }
      else
      {
        for(m=k; m>0; m--)
        {
          fac2*=m;
        }
      }
      if((i-k)==0)
      {
        fac3=1;
      }
      else
      {
        for(p=(i-k); p>0; p--)
        {
          fac3*=p;
        }
      }
      fac=(fac1)/((fac2)*(fac3));
      printf("%d ", fac);
    }
    printf("\n");
  }
  return 0;
}

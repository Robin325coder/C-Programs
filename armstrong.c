#include<stdio.h>
int main()
{
  int i, j, k, n, a;
  printf("ARMSTRONG NUMBER:\n\n");
  for(i=1; i<=500; i++)
  {
    a=0;
    k=i;
    for( ; k; k/=10)
    {
      n=k%10;
      a+=(n*n*n);
    }
    /*while(k)
    {
      n=k%10;
      a+=(n*n*n);
      k=k/10;
    }*/
    if(a==i)
    {
      printf("%d ", i);
    }
  }
  return 0;
}

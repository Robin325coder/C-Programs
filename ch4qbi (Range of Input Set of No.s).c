#include<stdio.h>
int main()
{
  int i, n, a[100], large=0, j, k;
  printf("RANGE OF INPUT SET OF NUMBERS:\n\n");
  printf("Enter how many numbers you want to type: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
  for(i=0; i<n; i++)
  {
    if(a[i]>large)
    {
      large=a[i];
    }
  }
  j=2*large;
  k=j/2;
  for(i=0; i<n; i++)
  {
    if(a[i]<k)
    {
      k=a[i];
    }
  }
  printf("Range of input set of numbers: %d", (large-k));
  return 0;
}

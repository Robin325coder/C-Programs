#include<stdio.h>
int main()
{
  int i, n, a[100], pos=0, neg=0, zero=0;
  printf("POSITIVE NO.S, NEGATIVE NO.S AND ZEROES:\n\n");
  printf("Enter the number of numbers you want to enter (max 100): ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
  for(i=0; i<n; i++)
  {
    if(a[i]>0)
      pos++;
    else if(a[i]<0)
      neg++;
    else if(a[i]==0)
      zero++;
  }
  printf("No. of positive no.s: %d\n", pos);
  printf("No. of negative no.s: %d\n", neg);
  printf("No. of zeroes entered: %d\n", zero);
  return 0;
}

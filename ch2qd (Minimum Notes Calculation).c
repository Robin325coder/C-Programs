#include<stdio.h>
int main()
{
  int N, a;
  printf("MINIMUM NOTES CALCULATION:\n\n");
  printf("Notes' denominations available: 1, 2, 5, 10, 50, 100\n");
  printf("Enter an amount: ");
  scanf("%d", &N);
  a=N/100;
  N=N%100;
  printf("No. of Rs. 100 notes: %d\n", a);
  a=N/50;
  N=N%50;
  printf("No. of Rs. 50 notes: %d\n", a);
  a=N/10;
  N=N%10;
  printf("No. of Rs. 10 notes: %d\n", a);
  a=N/5;
  N=N%5;
  printf("No. of Rs. 5 notes: %d\n", a);
  a=N/2;
  N=N%2;
  printf("No. of Rs. 2 notes: %d\n", a);
  a=N/1;
  printf("No. of Re. 1 notes: %d", a);
  return 0;
}

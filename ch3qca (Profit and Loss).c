#include<stdio.h>
int main()
{
  float sp, cp, prof, loss;
  printf("PROFIT AND LOSS:\n\n");
  printf("Enter the SP of the item: ");
  scanf("%f", &sp);
  printf("Enter the CP pf the item: ");
  scanf("%f", &cp);
  if(sp>cp)
  {
    prof=sp-cp;
    printf("Profit= %f", prof);
  }
  else if(sp<cp)
  {
    loss=cp-sp;
    printf("Loss= %f", loss);
  }
  else if(sp==cp)
  {
    printf("No profit, no loss");
  }
  return 0;
}

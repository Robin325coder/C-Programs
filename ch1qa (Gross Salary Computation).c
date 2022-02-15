#include<stdio.h>
int main()
{
  float basal, hra, da;
  printf("GROSS SALARY COMPUTATION:\n\n");
  printf("Enter your basic salary: ");
  scanf("%f", &basal);
  da=(40.0/100.0)*basal;
  hra=(20.0/100.0)*basal;
  printf("Gross salary: %f", (basal+da+hra));
  return 0;
}

#include<stdio.h>
int main()
{
  float sp, prof, cp;
  printf("COST PRICE CALCULATION:\n\n");
  printf("Enter the selling price of 15 items: ");
  scanf("%f", &sp);
  printf("Enter the profit gained on selling 15 items: ");
  scanf("%f", &prof);
  cp=(sp-prof)/15.0;
  printf("The cost price of one item is %f", cp);
  return 0;
}

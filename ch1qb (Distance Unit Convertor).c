#include<stdio.h>
int main()
{
  float km, met, inch, cent;
  printf("DISTANCE UNIT CONVERTOR:\n\n");
  printf("Enter the distance in km (kilometres):  ");
  scanf("%f", &km);
  met=1000*km;
  cent=100000*km;
  inch=39370.1*km;
  printf("Distance in metres: %f\n", met);
  printf("Distance in centimetres: %f\n", cent);
  printf("Distance in inches: %f", inch);
  return 0;
}

#include<stdio.h>
int main()
{
  float fah, cels;
  printf("TEMPERATURE CONVERTOR:\n\n");
  printf("Enter the temperature in degress fahrenheit: ");
  scanf("%f", &fah);
  cels=(fah-32.0)*(5.0/9.0);
  printf("Temperature in degrees celsius: %f", cels);
  return 0;
}

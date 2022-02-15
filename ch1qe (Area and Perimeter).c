#include<stdio.h>
int main()
{
  float len, br, r;
  printf("AREA AND PERIMETER:\n\n");
  printf("Enter the length of the rectangle: ");
  scanf("%f", &len);
  printf("Enter the breadth of the rectangle: ");
  scanf("%f", &br);
  printf("Enter the radius of the circle: ");
  scanf("%f", &r);
  printf("Area of rectangle: %f\n", (len*br));
  printf("Perimeter of rectangle: %f\n", (2*(len+br)));
  printf("Area of the circle: %f\n", (3.1416*r*r));
  printf("Circumference of the circle: %f\n", (2*3.1416*r));
  return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
  float x, y, r, ang, deg;
  printf("CARTESIAN TO POLAR COORDINATES:\n\n");
  printf("Enter the value of x (abscissa): ");
  scanf("%f", &x);
  printf("Enter the value of y (ordinate): ");
  scanf("%f", &y);
  r=sqrt((x*x)+(y*y));
  ang=atan(y/x);
  deg=(180.0/3.1416)*ang;
  printf("Angle is in degrees\n");
  printf("Polar coordinates: (%f, %f)", r, deg);
  return 0;
}

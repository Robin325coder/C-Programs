#include<stdio.h>
int main()
{
  float a, b, c;
  printf("GREATEST NUMBER:\n\n");
  printf("Enter three numbers: ");
  scanf("%f %f %f", &a, &b, &c);
  /*if(a>b)
  {
    if(a>c)
    {
      printf("Greatest number: %f", a);
    }
    else
    {
      printf("Greatest number: %f", c);
    }
  }
  else
  {
    if(b>c)
    {
      printf("Greatest number: %f", b);
    }
    else
    {
      printf("Greatest number: %f", c);
    }
  }*/
  if(a>b && a>c)
  {
    printf("Greatest number: %f", a);
  }
  else if(b>c && b>a)
  {
    printf("Greatest number: %f", b);
  }
  else
  {
    printf("Greatest number: %f", c);
  }
  return 0;
}
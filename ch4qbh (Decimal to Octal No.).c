#include<stdio.h>
#include<math.h>
int main()
{
  int a, b, c=0, i=0;
  printf("DECIMAL TO OCTAL NUMBER:\n\n");
  printf("Enter a decimal number: ");
  scanf("%d", &a);
  for(a; a; a=a/8)
  {
    b=a%8;
    c+=b*(pow(10, i));
    i++;
  }
  /*while(a)
  {
    b=a%8;
    c+=b*(pow(10, i));
    i++;
    a=a/8;
  }*/
  printf("Octal equivalent: %d", c);
  return 0;
}

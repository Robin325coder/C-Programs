//CODE IS CORRECT BUT CODEBLOCKS IS NOT SHOWING THE CORRECT OUPUT
#include<stdio.h>
#include<math.h>
int main()
{
  int a, b, c, d=0, i;
  printf("PRINTING NUMBER AFTER ADDING 1 TO EACH OF ITS DIGIT:\n\n");
  printf("Enter a five digit number: ");
  scanf("%d", &a);
  for(i=0; i<5; i++)
  {
    b=a%10;
    a=a/10;
    c=b+1;
    d+=c*pow(10,i);
  }
  printf("New number is: %d", d);
  return 0;
}

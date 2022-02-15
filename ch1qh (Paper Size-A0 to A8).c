#include<stdio.h>
int main()
{
  int len, br, i, newlen;
  printf("PAPER SIZE (A0 to A8):\n\n");
  printf("A0: 1189 mm x 841 mm\n");
  len=1189;
  br=841;
  for(i=1; i<=8; i++)
  {
     newlen=br;
     br=len/2;
     printf("A%d: %d mm x %d mm\n", i, newlen, br);
     len=newlen;
  }
  return 0;
}

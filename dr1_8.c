#include<stdio.h>

int main()
{ 
  int c, nb, nt, nsp;
  nb = nt = nsp = 0;
  printf("Type Ctrl+Z when your input has been finished\n");
  while((c=getchar()) != EOF)
  {
    if(c=='\n')
      nb++;
    else if(c=='\t')
      nt++;
    else if(c==' ')
      nsp++;
  }
  printf("No. of newline: %d", nb);
  printf("\nNo. of tabs: %d", nt);
  printf("\nNo. of spaces: %d", nsp);
  return 0;
}
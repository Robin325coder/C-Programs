#include<stdio.h>
int main()
{
  int i;
  printf("ASCII CHARACTER PRINTING:\n\n");
  printf("English Alphabet (Uppercase):\n");
  for(i=65; i<=90; i++)
  {
    printf("%c ", i);
  }
  printf("\nEnglish Alphabet (Lowercase):\n");
  for(i=97; i<=122; i++)
  {
    printf("%c ", i);
  }
  printf("\nSpecial symbols between English alphabet:\n");
  for(i=91; i<=96; i++)
  {
    printf("%c ", i);
  }
  return 0;
}

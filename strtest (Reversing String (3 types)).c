#include<stdio.h>
#include<string.h>


void revstr(char[], int); //robin kumar kashyap = payhsak ramuk nibor
void revstr_2(char[], int); //robin kumar kashyap = nibor ramuk payhsak
void revstr_3(char[], int); //robin kumar kashyap = kashyap kumar robin


int main()
{
  int len, choice;
  char a[50];
  
  printf("Strings' Test:\n\n");
  printf("For example-Input String is ROBIN KUMAR KASHYAP\n");
  printf("1. PAYHSAK RAMUK NIBOR\n");
  printf("2. NIBOR RAMUK PAYHSAK\n");
  printf("3. KASHYAP KUMAR ROBIN\n");

  printf("Enter a string (max 50 characters): ");
  fgets(a, 50, stdin); //fgets(string_name, max_size_of_string, stdin)
  len = strlen(a);

  printf("Enter your choice: ");
  scanf("%d", &choice);
  switch(choice)
  {
    case 1:revstr(a, len);
           break;
    case 2:revstr_2(a, len);
           break;
    case 3:revstr_3(a, len);
           break; 
    default:printf("Option not available");
  }
  return 0;
}


void revstr(char a[], int len) //robin kumar kashyap = payhsak ramuk nibor
{
  int i;
  printf("Output: ");
  for(i=len-2; i>=0; i--)
  {
    printf("%c", a[i]);
  }
}


void revstr_2(char a[], int len) //robin kumar kashyap = nibor ramuk payhsak
{
  int i, j;
  char str[50];
  
  printf("Output: ");
  for(i=0; a[i]!='\0'; i++)
  {
    if(a[i]!=' ')
    {
      str[i]=a[i];
    }
    if(a[i]==' ')
    {
      for(j=i-1; a[j]!=' '; j--)
      {
        if(j<0)
        {
          break;
        }
        printf("%c", str[j]);
      }
      printf("%c", a[i]);
    }
  }

  for(i=len-2; a[i]!=' '; i--)
  {
    printf("%c", a[i]);
  }
}


void revstr_3(char a[], int len)
{
  int i, j;
  char str[50];

  printf("Output: ");
  for(i=len-2; i>=0; i--)
  {
    if(a[i]!=' ')
    {
      str[i]=a[i];
    }
    if(a[i]==' ')
    {
      for(j=i+1; a[j]!=' '; j++)
      {
        if(j>(len-2))
        {
          break;
        }
        printf("%c", a[j]);
      }
      printf("%c", a[i]);
    }
  }

  for(i=0; a[i]!=' '; i++)
  {
    printf("%c", a[i]);
  }
}
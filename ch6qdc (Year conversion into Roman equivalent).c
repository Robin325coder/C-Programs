#include<stdio.h>
#include<math.h>
void roman(int);
int main()
{
  int year;
  printf("YEAR IN ROMAN NUMERALS:\n\n");
  printf("Enter a year (4 digits): ");
  scanf("%d", &year);
  roman(year);
  return 0;
}

void roman(int yr)
{
  int i, a, revyr=0, b, j, c;
  for(i=3; i>=0; i--)
  {
    a=yr%10;
    yr=yr/10;
    revyr+=a*pow(10, i);
  }
  for(i=3; i>=0; i--)
  {
    b=revyr%10;
    revyr=revyr/10;
    if(i==3)
    {
      for(j=0; j<b; j++)
      {
        printf("M");
      }
    }
    if(i==2)
    {
      if(b<4)
      {
        for(j=0; j<b; j++)
        {
          printf("C");
        }
      }
      else if(b==4)
      {
        printf("XD");
      }
      else if(b>4 && b<9)
      {
        c=(b*100)-500;
        c=c/100;
        printf("D");
        for(j=0; j<c; j++)
        {
          printf("C");
        }
      }
      else if(b==9)
      {
        printf("CM");
      }
    }
    if(i==1)
    {
      if(b<4)
      {
        for(j=0; j<b; j++)
        {
          printf("X");
        }
      }
      else if(b==4)
      {
        printf("XL");
      }
      else if(b>4 && b<9)
      {
        c=(b*10)-50;
        c=c/10;
        printf("L");
        for(j=0; j<c; j++)
        {
          printf("X");
        }
      }
      else if(b==9)
      {
        printf("XC");
      }
    }
    if(i==0)
    {
      if(b<4)
      {
        for(j=0; j<b; j++)
        {
          printf("I");
        }
      }
      else if(b==4)
      {
        printf("IV");
      }
      else if(b>4 && b<9)
      {
        c=b-5;
        printf("V");
        for(j=0; j<c; j++)
        {
          printf("I");
        }
      }
      else if(b==9)
      {
        printf("IX");
      }
    }
  }
  printf("\nThe input year has been converted to its Roman equivalent");
}

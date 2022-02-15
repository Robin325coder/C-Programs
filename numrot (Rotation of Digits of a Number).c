#include<stdio.h>


int digit(int); //No. of digits calculation
void posrot(int, int); //Positive rotation of digits
void negrot(int, int); //Negative rotation of digits


int main()
{
  int num, rot;
  
  printf("ROTATION OF DIGITS OF A NUMBER:\n\n");
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Enter number of rotations: ");
  scanf("%d", &rot);

  if(rot==0)
  {
    printf("No rotation can be done\n. Number: %d", num);
  }
  else if(rot>0)
  {
    posrot(num, rot);
  }
  else if(rot<0)
  {
    negrot(num, rot);
  }
  return 0;
}


int digit(int num) //No. of digits calculation
{
  int count=0;
  
  while(num)
  {
    count++;
    num /= 10;
  }
  
  return count;
}


void posrot(int num, int rot) //Positive rotation of digits
{
  int a, b, rem, i, c=1, nodig;

  nodig = digit(num);

  if((rot>=1) && (rot<nodig))
  {
    for(i=0; i<rot; i++)
    {
      c *= 10;
    }
    a = num % c;
    b = num / c;
    
    printf("%d%d", a, b);
  }
  else if(rot==nodig)
  {
    printf("%d", num);
  }
  else if(rot>nodig)
  {
    rem = rot % nodig;
    if(rem==0)
    {
      printf("%d", num);
    }
    else
    {
      for(i=0; i<rem; i++)
      {
        c *= 10;
      }
      a = num % c;
      b = num / c;
      
      printf("%d%d", a, b);
    }
  }
}


void negrot(int num, int rot) //Negative rotation of digits
{
  int nodig, no, rem, newrot;

  newrot = (-1) * rot;
  nodig = digit(num);

  if((newrot>=1) && (newrot<nodig))
  {
    no = nodig + rot;
    posrot(num, no);
  }
  else if(newrot==nodig)
  {
    printf("%d", num);
  }
  else if(newrot>nodig)
  {
    rem = rot % nodig;
    if(rem==0)
    {
      printf("%d", num);
    }
    else
    {
      no = nodig + rem;
      posrot(num, no);
    }
  }
}
#include<stdio.h>
int main()
{
  char ch, flag='y';
  int m, i, k, num, mleft;
  printf("MATCHSTICK GAME:\n\n");
  printf("Hello user! Now it's time to play the match stick game\n");
  printf("Let us see who wins!\n");
  printf("There are a total of 21 matchsticks.\n");
  printf("You can only pick up 1, 2, 3 or 4 matchsticks at a time.\n");
  printf("When you have picked the matchsticks, I will start picking.\n");
  printf("The one who will pick the last matchstick will lose.\n");
  do
  {
    num=21;
    do
    {
      printf("Pick up the matchsticks (1, 2, 3 or 4): ");
      scanf("%d", &m);
      if(m!=1 && m!=2 && m!=3 && m!=4)
      {
        printf("You are cheating.\n");
      }
      else
      {
        if(m==1)
        {
          printf("I picked 4 sticks.\n");
          k=4;
          mleft=num-(m+k);
          num=mleft;
          printf("\n%d matchsticks left.\n", num);
          if(num==1)
          {
            printf("\nYou lose.\n");
            break;
          }
        }
        else if(m==2)
        {
          printf("I picked 3 sticks.\n");
          k=3;
          mleft=num-(m+k);
          num=mleft;
          printf("\n%d matchsticks left.\n", num);
          if(num==1)
          {
            printf("\nYou lose.\n");
            break;
          }
        }
        else if(m==3)
        {
          printf("I picked 2 sticks.\n");
          k=2;
          mleft=num-(m+k);
          num=mleft;
          printf("\n%d matchsticks left.\n", num);
          if(num==1)
          {
            printf("\nYou lose.\n");
            break;
          }
        }
        else if(m==4)
        {
          printf("I picked 1 stick.\n");
          k=1;
          mleft=num-(m+k);
          num=mleft;
          printf("\n%d matchsticks left.\n", num);
          if(num==1)
          {
            printf("\nYou lose.\n");
            break;
          }
        }
      }
    }while(flag=='y');
    printf("\nWant to play again? (y/n): ");
    fflush(stdin);
    scanf("%c", &ch);
  }while(ch=='y' || ch=='Y');
  return 0;
}

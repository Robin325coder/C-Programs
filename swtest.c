#include<stdio.h>
int main()
{
  char ch;
  int choice, c;
  float a, b;
  printf("SWITCH CASE TEST:\n\n");
  printf("Available options:\n");
  printf("1. Sum of 2 numbers\n");
  printf("2. Difference of 2 numbers\n");
  printf("3. Odd-even number check\n");
  printf("4. Exit\n");
  do
  {
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1: printf("Enter two numbers: ");
              scanf("%f %f", &a, &b);
              printf("Sum = %f", (a+b));
              break;
      case 2: printf("Enter two numbers: ");
              scanf("%f %f", &a, &b);
              printf("Difference = %f", (a-b));
              break;
      case 3: printf("Enter a number: ");
              scanf("%d", &c);
              if(c%2==0)
                printf("%d is an even number", c);
              else
                printf("%d is a odd number", c);
              break;
      case 4: break;
    }
    printf("\nDo you want to continue (y/n): ");
    fflush(stdin);
    scanf("%c", &ch);
  }while(ch=='Y' || ch=='y');
  return 0;
}

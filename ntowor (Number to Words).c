#include<stdio.h>
#include<math.h>


void digitcount(int); //function for counting digits
void onedigit(int, int); //for 1-digit no.
void twodigit(int, int, int); //for 2-digit no.
void threedigit(int, int); //for 3-digit no.


int main()
{
  int n;
  printf("Number to Words Convertor:\n\n");
  printf("Enter a number: ");
  scanf("%d", &n);
  digitcount(n);
  return 0;
}


void digitcount(int num) //function for counting no. of digits
{
  int n, count=0;

  n = (2 * num) / 2; //n is a copy of num as while loop changes num to 0

  while(num) //Loop for counting no. of digits of num
  {
    count++;
    num = num / 10;
  }

  if(count==0 || count==1)
    onedigit(count, n);
  else if(count==2)
    twodigit(count, n, 0);
  else if(count==3)
    threedigit(count, n);
}


void onedigit(int count, int n) //function for 1-digit no.
{
  if(count==0)
  {
    printf("Zero");
  }
  else if(count==1)
  {
    switch(n)
    {
      case 1:printf("One");
             break;
      case 2:printf("Two");
             break;
      case 3:printf("Three");
             break;
      case 4:printf("Four");
             break;
      case 5:printf("Five");
             break;
      case 6:printf("Six");
             break;
      case 7:printf("Seven");
             break;
      case 8:printf("Eight");
             break;
      case 9:printf("Nine");
             break;
    }
  }
}


void twodigit(int count, int n, int un_id) //function for 2-digit no.
{
  switch(n)
  {
    case 11:if(un_id)
            {
              printf("eleven");
              break;
            }
            printf("Eleven");
            break;
    case 12:if(un_id)
            {
              printf("twelve");
              break;
            }
            printf("Twelve");
            break;
    case 13:if(un_id)
            {
              printf("thirteen");
              break;
            }
            printf("Thirteen");
            break;
    case 14:if(un_id)
            {
              printf("fourteen");
              break;
            }
            printf("Fourteen");
            break;
    case 15:if(un_id)
            {
              printf("fifteen");
              break;
            }
            printf("Fifteen");
            break;
    case 16:if(un_id)
            {
              printf("sixteen");
              break;
            }
            printf("Sixteen");
            break;
    case 17:if(un_id)
            {
              printf("seventeen");
              break;
            }
            printf("Seventeen");
            break;
    case 18:if(un_id)
            {
              printf("eighteen");
              break;
            }
            printf("Eighteen");
            break;
    case 19:if(un_id)
            {
              printf("nineteen");
              break;
            }
            printf("Nineteen");
            break;
    case 10:if(un_id)
            {
              printf("ten");
              break;
            }
            printf("Ten");
            break;
    case 20:if(un_id)
            {
              printf("twenty");
              break;
            }
            printf("Twenty");
            break;
    case 30:if(un_id)
            {
              printf("thirty");
              break;
            }
            printf("Thirty");
            break;
    case 40:if(un_id)
            {
              printf("forty");
              break;
            }
            printf("Forty");
            break;
    case 50:if(un_id)
            {
              printf("fifty");
              break;
            }
            printf("Fifty");
            break;
    case 60:if(un_id)
            {
              printf("sixty");
              break;
            }
            printf("Sixty");
            break;
    case 70:if(un_id)
            {
              printf("seventy");
              break;
            }
            printf("Seventy");
            break;
    case 80:if(un_id)
            {
              printf("eighty");
              break;
            }
            printf("Eighty");
            break;
    case 90:if(un_id)
            {
              printf("ninety");
              break;
            }
            printf("Ninety");
            break;
  }
  
  int a, i, newnum=0, count_2, ones;
  count_2 = count - 1;

  while(n) //Loop for reversing n to newnum
  {
    a=n%10;
    n=n/10;
    newnum += a * pow(10, count_2);
    if(count_2==0)
    {
      ones=a;
    } 
    count_2--;
  }
        
  if((!(newnum>=1 && newnum<=9)) && (ones!=1))
  {
    for(i=0; i<count; i++) //Loop for displaying 2-digit number in words
    {
      a = newnum % 10;
      newnum = newnum /10;
      if(i==0)
      {
        switch(a)
        {
          case 2:if(un_id)
                 {
                   printf("twenty-");
                   break;
                 }
                 printf("Twenty-");
                 break;
          case 3:if(un_id)
                 {
                   printf("thirty-");
                   break;
                 }
                 printf("Thirty-");
                 break;
          case 4:if(un_id)
                 {
                   printf("forty-");
                   break;
                 }
                 printf("Forty-");
                 break;
          case 5:if(un_id)
                 {
                   printf("fifty-");
                   break;
                 }
                 printf("Fifty-");
                 break;
          case 6:if(un_id)
                 {
                   printf("sixty-");
                   break;
                 }
                 printf("Sixty-");
                 break;
          case 7:if(un_id)
                 {
                   printf("seventy-");
                   break;
                 }
                 printf("Seventy-");
                 break;
          case 8:if(un_id)
                 {
                   printf("eighty-");
                   break;
                 }
                 printf("Eighty-");
                 break;
          case 9:if(un_id)
                 {
                   printf("ninety-");
                   break;
                 }
                 printf("Ninety-");
                 break;
        }
      }
      if(i==1)
      {
        switch(a)
        {
          case 1:printf("one");
                 break;
          case 2:printf("two");
                 break;
          case 3:printf("three");
                 break;
          case 4:printf("four");
                 break;
          case 5:printf("five");
                 break;
          case 6:printf("six");
                 break;
          case 7:printf("seven");
                 break;
          case 8:printf("eight");
                 break;
          case 9:printf("nine");
                 break;
        }
      }
    }
  }
}


void threedigit(int count, int n)
{
  int rem_2, power, quo;

  count = count - 1;
  power = pow(10, count) + 1; //pow(10, count=2)=99!!! this is wrong, so 1 is added to 99
  rem_2 = n % power;
  quo = n / power;

  if(rem_2==0)
  {
    switch(quo)
    {
      case 1:printf("One hundred");
             break;
      case 2:printf("Two hundred");
             break;
      case 3:printf("Three hundred");
             break;
      case 4:printf("Four hundred");
             break;
      case 5:printf("Five hundred");
             break;
      case 6:printf("Six hundred");
             break;
      case 7:printf("Seven hundred");
             break;
      case 8:printf("Eight hundred");
             break;
      case 9:printf("Nine hundred");
             break;
    }
  }
  else
  {
    switch(quo)
    {
      case 1:printf("One hundred and ");
             break;
      case 2:printf("Two hundred and ");
             break;
      case 3:printf("Three hundred and ");
             break;
      case 4:printf("Four hundred and ");
             break;
      case 5:printf("Five hundred and ");
             break;
      case 6:printf("Six hundred and ");
             break;
      case 7:printf("Seven hundred and ");
             break;
      case 8:printf("Eight hundred and ");
             break;
      case 9:printf("Nine hundred and ");
             break;
    }
  }
  
  twodigit(count, rem_2, 3);
}
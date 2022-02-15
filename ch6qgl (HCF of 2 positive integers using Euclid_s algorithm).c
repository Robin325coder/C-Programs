/* HCF of positive integers using Euclid's algorithm */

#include<stdio.h>
#include<stdlib.h>

void hcf(int, int);

int main()
{
    char choice='y';
    int n1, n2;
    do
    {
        printf("Enter first positive integer: ");
        scanf("%d", &n1);
        printf("Enter second positive integer: ");
        scanf("%d", &n2);
        if(n1<0 || n2<0)
        {
            printf("Negative integers are not allowed.\n");
            printf("Do you want to enter the numbers again? (y/n): ");
            fflush(stdin);
            scanf("%c", &choice);
        }
        else
        {
            hcf(n1, n2);
        }
    }while(choice=='y' || choice=='Y');
    return 0;
}

void hcf(int n1, int n2)
{
    char choice;
    int n3, a, b=1;
    while(b)
    {
        if(n1<n2)
        {
            n1 = n1 + n2;
            n2 = n1 - n2;
            n1 = n1 - n2;
        }
        if(n2==0)
        {
            printf("Divison by zero is not defined.");
            break;
        }
        a = n1 / n2;
        b = n1 - (a * n2);
        if(b==0)
        {
            printf("%d is HCF\n", n2);
            printf("Do you want to enter another positive integer (y/n): ");
            fflush(stdin);
            scanf("%c", &choice);
            if(choice=='y' || choice=='Y')
            {
                printf("Enter a number: ");
                scanf("%d", &n3);
                b = n3;
            }
            else
            {
                exit(0);
            }
        }
        n1 = n2;
        n2 = b;
    }
}
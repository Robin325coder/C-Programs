/* Using interest.h header file */

#include<stdio.h>
#include"interest.h"

int main()
{
    int p, r, t, interest;
    printf("Enter principal amount: ");
    scanf("%d", &p);
    printf("Enter rate of interest: ");
    scanf("%d", &r);
    printf("Enter number of years: ");
    scanf("%d", &t);
    interest = INTEREST(p, r, t);
    printf("Interest: %d\n", interest);
    printf("Total amount: %d", AMOUNT(interest, p));
    return 0;
}
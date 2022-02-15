/* Prime factors calculation using recursion */

#include<stdio.h>

void rec(unsigned);

int main()
{
    unsigned n;
    printf("Enter a number: ");
    scanf("%ud", &n);
    rec(n);
    return 0;
}

void rec(unsigned n)
{
    int i, j;
    for(i=2; i<=n; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j) //Prime numbers are taken and then used to divide number in the following code
        {
            if(n%i==0)
            {
                n /= i; //Check code from here
                if(n==1)
                {
                    //printf("%d@ ", i); //Put return 1; in comments for different output
                    return 1;
                }
                else
                {
                    printf("%d# ", i);
                    rec(n);
                }
                /*printf("%d#, ", i); //CORRECT CODE SNIPPET
                rec(n/i);
                break;*/
            }
        }
    }
}
/* Macros for small case, upper case, and alphabet check */

#include<stdio.h>
#include<ctype.h>
#define SMALL(ch) islower(ch)
#define ALPHABET(ch) isalpha(ch)

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ALPHABET(ch))
    {
        printf("It is an alphabet.\n");
        if(SMALL(ch))
        {
            printf("It is in small case.\n");
        }
        else
        {
            printf("It is in upper case.\n");
        }
    }
    else
    {
        printf("Entered character is not an alphabet.\n");
    }
    return 0;
}
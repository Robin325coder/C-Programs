/* Macros for mean, absolute value, uppercase to lowercase, and bigger of 2 numbers */

#include<stdio.h>
#include<ctype.h>

#define MEAN(x, y) ((x + y) / 2)
#define ABSOL(x) ((x<0)? -x : x)
#define UPTOLOW(ch) (isupper(ch)? printf("%c", tolower(ch)) : printf("%c is in lowercase", ch))
#define BIGGER(x, y) ((x>y)? x : y)

int main()
{
    int x, y;
    char ch;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    printf("Enter an alphabet: ");
    fflush(stdin);
    scanf("%c", &ch);
    printf("Mean: %d\n", MEAN(x, y));
    printf("Absolute value of %d: %d\n", x, ABSOL(x));
    printf("Absolute value of %d: %d\n", y, ABSOL(y));
    printf("Bigger of %d and %d is %d\n", x, y, BIGGER(x, y));
    UPTOLOW(ch);
    return 0;
}
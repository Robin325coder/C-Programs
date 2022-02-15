#include<stdio.h>
int main()
{
    int i=1, j=1, k=1, l=1, m=1, n=1, p=1, q=1;
    printf("1. %d %d %d\n", k, k, k++);
    printf("2. %d %d %d\n", i, i, ++i);
    printf("3. %d %d %d\n", j++, j, j);
    printf("4. %d %d %d\n", ++l, l, l);
    printf("5. %d %d %d\n", m, m++, ++m);
    printf("6. %d %d %d\n", n, ++n, n++);
    printf("7. %d %d %d\n", p++, ++p, p);
    printf("8. %d %d %d\n", ++q, q++, q);
    return 0;
}
#include<stdio.h>
int main()
{
    int a, b;
    printf("Bitwise Operators:\n\n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("AND %d & %d: %d\n", a, b, (a & b));
    printf("OR %d | %d: %d\n", a, b, (a | b));
    printf("XOR %d ^ %d: %d\n", a, b, (a ^ b));
    printf("LEFT SHIFT %d <<: %d\n", a, (a<<3));
    printf("RIGHT SHIFT %d >>: %d\n", b, (b>>3));
    printf("COMPLEMENT ~ %d: %d\n", a, (~a));
    printf("COMPLEMENT ~ %d: %d", b, (~b));
    return 0;
}
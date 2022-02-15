#include<stdio.h>
int main()
{
    int choice;
    float cels, fahr;
    printf("Temperature Conversion:\n\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:printf("Enter temperature in celsius: ");
               scanf("%f", &cels);
               fahr = (9 * cels) / 5 + 32;
               printf("%f in fahrenheit: %f", cels, fahr);
               break;
        case 2:printf("Enter temperature in fahrenheit: ");
               scanf("%f", &fahr);
               cels = ((fahr - 32) * 5) / 9;
               printf("%f in celsius: %f", fahr, cels);
               break;
        default:printf("Option not available");
    }
    return 0;
}
#include<stdio.h>

/*struct Student
{
    char name[20];
    int roll;
};*/

int main()
{
    struct Student
    {
        char name[20];
        int roll;
    }s2, s3;
    
    printf("Enter s2 name: ");
    gets(s2.name);
    printf("Enter s2 roll no: ");
    scanf("%d", &s2.roll);

    printf("\n\n");

    printf("Enter s3 name: ");
    fflush(stdin); //Used to clear buffer of gets()
    gets(s3.name);
    printf("Enter s3 roll no: ");
    scanf("%d", &s3.roll);

    printf("s2 details:\n");
    printf("s2 name: ");
    puts(s2.name);
    printf("s2 roll no: %d", s2.roll);

    printf("\n\n");

    printf("s3 details:\n");
    printf("s3 name: ");
    puts(s3.name);
    printf("s3 roll no: %d", s3.roll);

    return 0;
}
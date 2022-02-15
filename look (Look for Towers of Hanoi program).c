#include<stdio.h>
#include<string.h>
#define FULLWIDTH 6
#define LEFTWIDTH 2
#define RIGHTWIDTH 2

void firstlook(int);
int strlength(int);
void disp(int*, int*, int*, int, int);

char sname[] = {'S', 'O', 'U', 'R', 'C', 'E', '\0'};
char hname[] = {'H', 'E', 'L', 'P', 'E', 'R', '\0'};
char dname[] = {'D', 'E', 'S', 'T', 'I', 'N', 'A', 'T', 'I', 'O', 'N', '\0'};

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    firstlook(n);
    return 0;
}

void firstlook(int n) //prints "SOURCE", "HELPER", "DESTINATION"
{
    int slen, hlen, dlen, i;
    slen = strlen(sname);
    hlen = strlen(hname);
    dlen = strlen(dname);

    //For printing first row of stars
    if(n<=slen)
    {
        for(i=0; i<slen+FULLWIDTH; i++)
            printf("* ");
    }
    else
    {
        for(i=0; i<n+FULLWIDTH+(n-slen); i++)
            printf("* ");
    }
    if(n<=hlen)
    {
        for (i=0; i<(hlen+FULLWIDTH)-1; i++)
            printf("* ");
    }
    else
    {
        for(i=0; i<(n+FULLWIDTH)+(n-hlen)-1; i++)
            printf("* ");
    }
    if(n<=dlen)
    {
        for(i=0; i<(dlen+FULLWIDTH)-1; i++)
            printf("* ");
    }
    else
    {
        for(i=0; i<(n+FULLWIDTH)+(n-dlen)-1; i++)
            printf("* ");
    }
    printf("\n");

    //For printing "SOURCE"
    printf("* ");
    if(n<=slen)
    {
        for(i=0; i<LEFTWIDTH; i++)
            printf("  ");
        for(i=0; sname[i]!='\0'; i++)
            printf("%c ", sname[i]);
        for(i=0; i<RIGHTWIDTH; i++)
            printf("  ");
    }
    else
    {
        for(i=0; i<LEFTWIDTH+(n-slen); i++)
            printf("  ");
        for(i=0; sname[i]!='\0'; i++)
            printf("%c ", sname[i]);
        for(i=0; i<(n-slen)+RIGHTWIDTH; i++)
            printf("  ");
    }
    printf("* ");

    //For printing "HELPER"
    if(n<=hlen)
    {
        for(i=0; i<LEFTWIDTH; i++)
            printf("  ");
        for(i=0; hname[i]!='\0'; i++)
            printf("%c ", hname[i]);
        for(i=0; i<RIGHTWIDTH; i++)
            printf("  ");
    }
    else
    {
        for(i=0; i<LEFTWIDTH+(n-hlen); i++)
            printf("  ");
        for(i=0; hname[i]!='\0'; i++)
            printf("%c ", hname[i]);
        for(i=0; i<(n-hlen)+RIGHTWIDTH; i++)
            printf("  ");
    }
    printf("* ");

    //For printing "DESTINATION"
    if(n<=dlen)
    {
        for(i=0; i<LEFTWIDTH; i++)
            printf("  ");
        for(i=0; dname[i]!='\0'; i++)
            printf("%c ", dname[i]);
        for(i=0; i<RIGHTWIDTH; i++)
            printf("  ");
    }
    else
    {
        for(i=0; i<LEFTWIDTH+(n-dlen); i++)
            printf("  ");
        for(i=0; dname[i]!='\0'; i++)
            printf("%c ", dname[i]);
        for(i=0; i<(n-dlen)+RIGHTWIDTH; i++)
            printf("  ");
    }
    printf("* ");
    printf("\n");

    //For printing last row of stars
    if(n<=slen)
    {
        for(i=0; i<slen+FULLWIDTH; i++)
            printf("* ");
    }
    else
    {
        for(i=0; i<n+FULLWIDTH+(n-slen); i++)
            printf("* ");
    }
    if(n<=hlen)
    {
        for (i=0; i<(hlen+FULLWIDTH)-1; i++)
            printf("* ");
    }
    else
    {
        for(i=0; i<(n+FULLWIDTH)+(n-hlen)-1; i++)
            printf("* ");
    }
    if(n<=dlen)
    {
        for(i=0; i<(dlen+FULLWIDTH)-1; i++)
            printf("* ");
    }
    else
    {
        for(i=0; i<(n+FULLWIDTH)+(n-dlen)-1; i++)
            printf("* ");
    }
    printf("\n");
}

void disp(int source[], int helper[], int dest[], int step, int n) //displays current status of pegs
{
    int i, slen, hlen, dlen;
    slen = strlen(sname);
    hlen = strlen(hname);
    dlen = strlen(dname);

    //For printing "source array"
    printf("* ");
    printf("%d.", step);
    if(n<=slen)
    {
        for(i=0; i<LEFTWIDTH; i++)
            printf("  ");
        for(i=1; i<=n; i++)
        {
            if(source[i]!=0)
                printf("%d ", source[i]);
        }
        for(i=0; i<RIGHTWIDTH; i++)
            printf("  ");
    }
    else
    {
        for(i=0; i<LEFTWIDTH+(n-slen); i++)
            printf("  ");
        for(i=1; i<=n; i++)
        {
            if(source[i]!=0)
                printf("%d ", source[i]);
        }
        for(i=0; i<(n-slen)+RIGHTWIDTH; i++)
            printf("  ");
    }
    printf("* ");

    //For printing "helper array"
    if(n<=hlen)
    {
        for(i=0; i<LEFTWIDTH; i++)
            printf("  ");
        for(i=1; i<=n; i++)
        {
            if(helper[i]!=0)
                printf("%d ", helper[i]);
        }
        for(i=0; i<RIGHTWIDTH; i++)
            printf("  ");
    }
    else
    {
        for(i=0; i<LEFTWIDTH+(n-hlen); i++)
            printf("  ");
        for(i=1; i<=n; i++)
        {
            if(helper[i]!=0)
                printf("%d ", helper[i]);
        }
        for(i=0; i<(n-hlen)+RIGHTWIDTH; i++)
            printf("  ");
    }
    printf("* ");

    //For printing "dest array"
    if(n<=dlen)
    {
        for(i=0; i<LEFTWIDTH; i++)
            printf("  ");
        for(i=1; i<=n; i++)
        {
            if(dest[i]!=0)
                printf("%d ", dest[i]);
        }
        for(i=0; i<RIGHTWIDTH; i++)
            printf("  ");
    }
    else
    {
        for(i=0; i<LEFTWIDTH+(n-dlen); i++)
            printf("  ");
        for(i=1; i<=n; i++)
        {
            if(dest[i]!=0)
                printf("%d ", dest[i]);
        }
        for(i=0; i<(n-dlen)+RIGHTWIDTH; i++)
            printf("  ");
    }
    printf("* ");
    printf("\n\n");
}
#include<stdio.h>
int main()
{
    /*int s[4][2] = {
                    {1234, 56},
                    {1212, 33},
                    {1434, 80},
                    {1312, 78}
    };*/

    /*int (*p)[2]; //THIS CODE WORKS
    int i, j, *pint;
    for(i=0; i<4; i++)
    {
        p = &s[i];
        pint = *p;
        printf("\n");
        for(j=0; j<2; j++)
        {
            printf("%d ", *(pint + j));
            //printf("%d ", *(*(s+i)+j)); //also prints the 2D array
        }
    }*/

    /*int i=2;
    printf("1.  %d\n", s[i]); //prints address
    printf("2.  %d\n", *s[i]); //value
    printf("3.  %d\n", &s[i]); //prints same address as s[i]
    printf("4.  %d\n", *(s+0)); //prints same address as s[0]
    printf("5.  %d\n", *(*(s+0)+1)); //value
    printf("6.  %d\n", *s); //prints same address as s[0]
    printf("7.  %d\n", s[i][1]); //value
    //printf("8.  %d\n", *s[i][1]); //invalid as s[i][1] is not a pointer
    printf("9.  %d\n", **(s+2)); //value
    printf("10.  %d\n", *(s+2)); //prints same address as s[i]
    printf("11.  %d\n", s[2]); //prints same address as s[i]
    printf("12.  %d\n", *(&s[i])); //prints same address as s[i]*/

    /*int i, j, *pint; //THIS CODE WORKS
    for(i=0; i<4; i++)
    {
        pint = s[i];
        printf("\n");
        for(j=0; j<2; j++)
        {
            printf("%d ", *(pint + j));
        }
    }*/

    /*int i, j, *pint; //THIS CODE WORKS
    for(i=0; i<4; i++)
    {
        pint = *(&s[i]);
        printf("\n");
        for(j=0; j<2; j++)
        {
            printf("%d ", *(pint + j));
        }
    }*/

    int a[]={1, 2, 3, 4};
    int i, *ptr, **add;
    ptr = &a[0]; //can be written as ptr=a
    add = &ptr;
    printf("1.  %d  %d\n", ptr, add);
    printf("2.  %d  %d\n", ptr+1, add+1);
    printf("3.  %d  %d\n", *ptr, *add); //*ptr=1
    printf("4.  %d  %d\n", *ptr+16, *add+3); //*ptr+16=17
    printf("5.  %d\n", add+3);
    printf("6.  %d\n", *add+1);
    printf("7.  %d\n", *(ptr+4));
    printf("8.  %d\n", &a[3]);
    printf("9.  %d\n", &a[4]);
    printf("10.  %d\n", &a[5]);
    printf("11.  %d\n", a[3]); //a[3]=4
    printf("12.  %d\n", a[4]);
    printf("13.  %d\n", a[5]);
    printf("14.  %d\n", *(&a+1));
    printf("15.  %d\n", (&a+1));

    /* CONCLUSIONS:
       -> ptr = add+1 = *add = a[5] //for 6422284; 1,2,3,13
       -> add = *(ptr+4) = a[4] //for 6422280; 1,7,12
       -> ptr+1 = *add+1 //for 6422288; 2,6
       -> *add+3 = &a[3] //for 6422296; 4,8
       -> add+3 //for 6422292; 5
       -> &a[4] = *(&a+1) = (&a+1) //for 6422300; 9,14,15
       -> &a[5] //for 6422304; 10
       -> 
    */

    return 0;
}
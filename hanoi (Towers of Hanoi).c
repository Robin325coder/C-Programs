//Towers of Hanoi

#include<stdio.h>
#include<string.h>
#define EMPTY 0

void oddtower(int); //for odd no. of disks
void eventower(int); //for even no. of disks
int firstelem(int[], int); //calculates the first non-zero element of array
int count(int[], int); //counts the no. of disks and returns EMPTY if array is empty
void push(int, int*, int); //pushes valid numbered disk on the peg
void delelem(int*, int, int); //removes one disk from a peg
void disp(int*, int*, int*, int, int); //displays current status of pegs

int main()
{
    int n;
    printf("Towers of Hanoi:\n\n");
    printf("How many disks you want to enter?: ");
    scanf("%d", &n);
    if(n<=0)
        printf("You entered an invalid number of disks.\n");
    else
    {
        if(n%2==0)
            eventower(n);
        else
            oddtower(n);
    }
    return 0;
}

int count(int arr[], int n) //counts the no. of disks and returns EMPTY if array is empty
{
    int no_of_elem=0, i;
    for(i=1; i<=n; i++)
    {
        if(arr[i]!=0)
            no_of_elem++;
    }
    return no_of_elem;
}

int firstelem(int arr[], int n) //calculates the first non-zero element of array
{
    int i;
    for(i=1; i<=n; i++)
    {
        if(arr[i]!=0)
            return arr[i];
    }
}

void push(int elem, int arr[], int n) //pushes valid numbered disk on the peg
{
    int i;
    for(i=1; i<=n; i++)
    {
        if(i==elem)
            arr[i] = elem;
    }
}

void delelem(int arr[], int n, int elem) //removes one disk from a peg
{
    int i;
    for(i=1; i<=n; i++)
    {
        if(i==elem)
            arr[i] = 0;
    }
}

void disp(int source[], int helper[], int dest[], int step, int n) //displays current status of pegs
{
    int i, s_num=0, h_num=0, d_num=0;

    printf("\t%d.\t", step);
    //For printing "source array"
    for(i=1; i<=n; i++)
    {
        if(source[i]!=0)
            printf("%d, ", source[i]);
        else
            s_num++;
    }
    if(s_num==n)
        printf("EMPTY\t\t");
    else
        printf("\t\t");

    //For printing "helper array"
    for(i=1; i<=n; i++)
    {
        if(helper[i]!=0)
            printf("%d, ", helper[i]);
        else
            h_num++;
    }
    if(h_num==n)
        printf("EMPTY\t\t");
    else
        printf("\t\t");

    //For printing "dest array"
    for(i=1; i<=n; i++)
    {
        if(dest[i]!=0)
            printf("%d, ", dest[i]);
        else
            d_num++;
    }
    if(d_num==n)
        printf("EMPTY\n\n");
    else
        printf("\n\n");
}

void oddtower(int n) //for odd no. of disks
{
    int source[n], helper[n], dest[n], i, step=1;
    for(i=1; i<=n; i++)
    {
        source[i] = i;
        helper[i] = 0;
        dest[i] = 0;
    }
    
    disp(source, helper, dest, step, n);

    do
    {
        if(count(dest, n)!=n)
        {
            if(count(dest, n) == EMPTY) //For pegs A-source and C-destination
            {
                push(firstelem(source, n), dest, n);
                delelem(source, n, firstelem(source, n));
            }
            else
            {
                if(firstelem(source, n) < firstelem(dest, n))
                {
                    push(firstelem(source, n), dest, n);
                    delelem(source, n, firstelem(source, n));
                }
                else
                {
                    push(firstelem(dest, n), source, n);
                    delelem(dest, n, firstelem(dest, n));
                }
            }
            step++;
            disp(source, helper, dest, step, n);
        }

        if(count(dest, n)!=n)
        {
            if(count(helper, n) == EMPTY) //For pegs A-source and B-helper
            {
                push(firstelem(source, n), helper, n);
                delelem(source, n, firstelem(source, n));
            }
            else
            {
                if(firstelem(source, n) < firstelem(helper, n))
                {
                    push(firstelem(source, n), helper, n);
                    delelem(source, n, firstelem(source, n));
                }
                else
                {
                    push(firstelem(helper, n), source, n);
                    delelem(helper, n, firstelem(helper, n));
                }
            }
            step++;
            disp(source, helper, dest, step, n);
        }

        if(count(dest, n)!=n)
        {
            if(firstelem(helper, n) < firstelem(dest, n)) //For pegs B-helper and C-destination
            {
                push(firstelem(helper, n), dest, n);
                delelem(helper, n, firstelem(helper, n));
            }
            else
            {
                push(firstelem(dest, n), helper, n);
                delelem(dest, n, firstelem(dest, n));
            }
            step++;
            disp(source, helper, dest, step, n);
        }
    }while(count(dest, n)!=n); //Checking needs to be done after every step and not after 3 steps
}

void eventower(int n) //for even no. of disks
{
    int source[n], helper[n], dest[n], i, step=1;
    for(i=1; i<=n; i++)
    {
        source[i] = i;
        helper[i] = 0;
        dest[i] = 0;
    }
    
    disp(source, helper, dest, step, n);

    do
    {
        if(count(dest, n)!=n)
        {
            if(count(helper, n) == EMPTY) //For pegs A-source and B-helper
            {
                push(firstelem(source, n), helper, n);
                delelem(source, n, firstelem(source, n));
            }
            else
            {
                if(firstelem(source, n) < firstelem(helper, n))
                {
                    push(firstelem(source, n), helper, n);
                    delelem(source, n, firstelem(source, n));
                }
                else
                {
                    push(firstelem(helper, n), source, n);
                    delelem(helper, n, firstelem(helper, n));
                }
            }
            step++;
            disp(source, helper, dest, step, n);
        }

        if(count(dest, n)!=n)
        {
            if(count(dest, n) == EMPTY) //For pegs A-source and C-destination
            {
                push(firstelem(source, n), dest, n);
                delelem(source, n, firstelem(source, n));
            }
            else
            {
                if(firstelem(source, n) < firstelem(dest, n))
                {
                    push(firstelem(source, n), dest, n);
                    delelem(source, n, firstelem(source, n));
                }
                else
                {
                    push(firstelem(dest, n), source, n);
                    delelem(dest, n, firstelem(dest, n));
                }
            }
            step++;
            disp(source, helper, dest, step, n);
        }

        if(count(dest, n)!=n)
        {
            if(firstelem(helper, n) < firstelem(dest, n)) //For pegs B-helper and C-destination
            {
                push(firstelem(helper, n), dest, n);
                delelem(helper, n, firstelem(helper, n));
            }
            else
            {
                push(firstelem(dest, n), helper, n);
                delelem(dest, n, firstelem(dest, n));
            }
            step++;
            disp(source, helper, dest, step, n);
        }
    }while(count(dest, n)!=n); //Checking needs to be done after every step and not after 3 steps
}
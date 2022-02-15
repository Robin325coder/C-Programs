//Static stack program with array passing in functions

#include<stdio.h>
#include<stdlib.h>
#define ARR 5

void input();
void push(int*, int);
void pop(int*, int);
void disp(int*, int);

int main()
{
    input();
    return 0;
}

void input() //STACK INPUT
{
    int i, arr[ARR], n, choice;
    char entry;
    do
    {
        printf("Enter how many elements you want to enter (max %d): ", ARR);
        scanf("%d", &n);
        if(n>ARR || n<0)
        {
            printf("You entered invalid stack size.\n");
            printf("Want to enter again? (y/n): ");
            fflush(stdin);
            scanf("%c", &entry);
        }
        else
        {
            printf("Enter the stack's elements: ");
            for(i=0; i<n; i++)
            {
                scanf("%d", &arr[i]);
            }
            break;
        }
    }while(entry=='y' || entry=='Y');
    printf("\nSTACK OPERATIONS:\n");
    printf("1. Pushing elements in the stack\n");
    printf("2. Popping elements from the stack\n");
    printf("3. Displaying stack's elements\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: if(n==ARR)
                {
                    printf("Stack is already full.\n");
                }
                else
                {
                    push(&arr[n-1], n);
                }
                break;
        case 2: if(n==0)
                {
                    printf("No element in the stack available.\n");
                }
                else
                {
                    pop(&arr[n-1], n);
                }
                break;
        case 3: disp(&arr[n-1], n);
                break;
        default: printf("Option not available");
    }
}

void disp(int*arrptr, int n) //DISPLAY THE STACK
{
    int i;
    printf("\nStack:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", *arrptr);
        arrptr--;
    }
}

void push(int*ptr, int n) //PUSH OPERATION
{
    int elem, max, num, size;
    char choice;
    max = ARR - n;
    printf("\nMaximum %d elements can be pushed into the stack.\n", max);
    do
    {
        printf("How many elements do you want to push?: ");
        scanf("%d", &num);
        if((num<=max) && (num>=0))
        {
            size = num + n;
            printf("Push elements: ");
            while((num>0) && (num<=max))
            {
                scanf("%d", &elem);
                ptr++;
                *ptr = elem;
                num--;
            }
            disp(ptr, size);
            break;
        }
        else
        {
            printf("Stack overflow.\n");
            printf("Do you want to push the elements? (y/n): ");
            fflush(stdin);
            scanf("%c", &choice);
        }
    }while(choice=='y' || choice=='Y');
}

void pop(int*ptr, int n) //POP OPERATION
{
    int num, size;
    char choice;
    printf("\nMaximum %d elements can be popped off from stack.\n", n);
    do
    { 
        printf("How many elements do you want to pop?: ");
        scanf("%d", &num);
        if((num>=0) && (num<=n))
        {
            size = n - num;
            ptr -= num;
            disp(ptr, size);
            break;
        }
        else
        {
            printf("Stack underflow.\n");
            printf("Do you want to pop off the elements? (y/n): ");
            fflush(stdin);
            scanf("%c", &choice);
        }
    }while(choice=='y' || choice=='Y');  
}
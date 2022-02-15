//Static stack program

#include<stdio.h>
#define ARR 5

int main()
{
    int top=-1, a[ARR], max=ARR, elem, i;
    char ch;

    printf("Maximum elements allowed: %d.\n", ARR);

    do  //PUSH OPERATION
    {
        printf("Enter element: ");
        scanf("%d", &elem);
        top = top + 1;
        a[top] = elem;
        printf("Want to enter more elements?(y/n): ");
        fflush(stdin);
        scanf("%c", &ch);
    }while((ch=='y' || ch=='Y') && (top<max-1));

    if(top>=max-1)
    {
        printf("Stack overflow.\n");
    }

    printf("Stack:\n");
    for(i=top; i>=0; i--)
    {
        printf("%d, ", a[i]);
    }
    printf("\n");
    
    do  //POP OPERATION
    {
        printf("Do you want to delete the stack\'s element?(y/n): ");
        fflush(stdin);
        scanf("%c", &ch);
        if(ch=='y' || ch=='Y')
        {
            top = top - 1;
            if(top<0)
            {
                printf("Stack underflow.");
                break;
            }
            printf("New Stack: ");
            for(i=top; i>=0; i--)
            {
                printf("%d, ", a[i]);
            }
            printf("\n");
        }
        else
        {
            break;
        }
    }while((ch=='y' || ch=='Y') && (top>=0));
    
    return 0;
}
#include<stdio.h>

void disp(int[], int);
void insert(int[], int);
void del(int[], int);
void search(int[], int);

int main()
{
    int n, i, arr[5], choice;
    printf("OPERATIONS ON ARRAY:\n\n");
    printf("How many elements you want to enter? (max 5 elements): ");
    scanf("%d", &n);
    printf("Now enter the array's elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("You have following choices:\n");
    printf("1. Display the array\n");
    printf("2. Insert an element\n");
    printf("3. Delete an element\n");
    printf("4. Search for an element\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: disp(arr, n);
                break;
        case 2: insert(arr, n);
                break;
        case 3: del(arr, n);
                break;
        case 4: search(arr, n);
                break;
        default: printf("Choice not available");
    }
    return 0;
}

void disp(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d, ", arr[i]);
    }
}

void insert(int arr[], int n)
{
    int pos, i, elem;
    if(n>=5)
    {
        printf("No element can be inserted");
    }
    else
    {
        disp(arr, n);
        printf("\nAt which position do you want to insert element?: ");
        scanf("%d", &pos);
        printf("Enter the element you want to enter: ");
        scanf("%d", &elem);
        for(i=n-1; i>=pos-1; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = elem;
        for(i=0; i<=n; i++)
        {
            printf("%d, ", arr[i]);
        }
    }
}

void del(int arr[], int n)
{
    int i, pos;
    disp(arr, n);
    printf("\nEnter the position of the element you want to delete: ");
    scanf("%d", &pos);
    if(pos>=n+1)
    {
        printf("You cannot delete the element");
    }
    else
    {
        for(i=pos-1; i<n-1; i++)
        {
            arr[i] = arr[i+1];
        }
        for(i=0; i<n-1; i++)
        {
            printf("%d, ", arr[i]);
        }
    }
}

void search(int arr[], int n)
{
    int i, elem;
    printf("Enter the element you want to search: ");
    scanf("%d", &elem);
    for(i=0; i<n; i++)
    {
        if(arr[i]==elem)
        {
            printf("%d found at %d position", elem, i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("Element not found");
    }
}
//Big to small bottles problem's solution

#include<stdio.h>
#include<stdlib.h>

void bottle(int); //calculates the no. of visible bottles
int count(int[], int); //counts the no. of elements in the array
void assign(int*, int*, int); //assign elements of "record" array to "arr" array
void sort(int*, int); //sorts the radius of bottles in ascending order

int main()
{
    int n;
    printf("How many bottles' radius you want to enter?: ");
    scanf("%d", &n);
    if(n>0)
        bottle(n);
    else
        printf("You entered an invalid value.");
    return 0;
}

int count(int radius[], int n) //counts the no. of elements in the array
{
    int i, num=0;
    for(i=0; i<n; i++)
    {
        if(radius[i]!=0)
            num++;
    }
    return num;
}

void sort(int arr[], int n) //sorts the radius of bottles in ascending order
{
    int i, j, a;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}

void assign(int record[], int arr[], int n) //assign elements of "record" array to "arr" array
{
    int i;
    for(i=0; i<n; i++)
        arr[i] = record[i];
}

void bottle(int n) //calculates the no. of visible bottles
{
    int i, arr[n], index, num_bottle=0; //index maintains dynamic array "record" length
    int*record; //"record" is dynamic array whose elements get reduced as algorithm proceeds

    printf("Enter the radius of bottles: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]); //inputing radius of bottles
    record = (int*)malloc(n * sizeof(int)); //dynamic allocation of "record"
    for(i=0; i<n; i++)
        record[i] = 0; //initialization of "record" elements with zero
    
    sort(arr, n); //ascending order sorting is needed for following algorithm to function
    printf("\n");
    do
    {
        index=0; //"record" needs to be initialized every time
        for(i=0; i<(n-1); i++)
        {
            for(int j=i; j<=i; j++)
            {
                if(arr[j]<arr[j+1])
                    arr[j] = 0;
                else
                {
                    record[index] = arr[j];
                    index++;
                    arr[j] = 0;
                }
            }
        }
        printf("%d, ", arr[n-1]); //prints the last element of "record" because it is the largest radius

        //"record" needs reallocation because we don't how many elements will it contain
        record = (int*)realloc(record, index * sizeof(int));
        assign(record, arr, index);
        n = index; //'index' assigned to 'n' because first "for loop" needs 'n' and not 'index'
        num_bottle++; //counts the no. of visible bottles
    }while(count(arr, n)>0);
    free(record); //freeing memory allocated to "record" array
    printf("\n%d bottles will be visible.\n", num_bottle);
}
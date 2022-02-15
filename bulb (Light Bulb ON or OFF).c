//Light bulb switched on and off problem's solution

#include<stdio.h>
#include<stdlib.h>
#define OFF 0
#define ON 1
int main()
{
    int i, j, n;
    int*arr, *state;
    printf("Light bulbs are placed in consecutive rooms.\n");
    printf("Room no. starts from 1.\n");
    printf("How many light bulbs you want?: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    state = (int*)malloc(n * sizeof(int));
    for(i=0; i<n; i++)
    {
        arr[i] = i+1;
        state[i] = OFF;
    }
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            for(j=0; j<n; j++)
            {
                state[j] = ON;
            }
        }
        else
        {
            for(j=i+1; j<=n; j++)
            {
                if(j%i==0)
                {
                    if(state[j-1]==ON)
                        state[j-1] = OFF;
                    else
                        state[j-1] = ON;
                }
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(state[i]==ON)
            printf("%d ", i+1);
    }
    free(arr);
    free(state);
    return 0;
}
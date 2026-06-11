
/*
   Display all prime numbers from the array.
*/


#include<stdio.h>
#include<stdlib.h>

void PirmeNumbers(int arr[], int size)
{
    int prime = 0;

    for(int i = 0; i < size; i++)
    {
        
        int prime = 0;

        int bflag = 1; 

        for(int j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                bflag = 0;
                break;
            }
        }

        if(bflag == 1)
        {
            printf("%d ", arr[i]);
        }   
    }
}

int main()
{
    int size = 0;
    int *arr = NULL;

    printf("Enter the size of the array : \n");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    if(arr == NULL)
    {
        printf("Inable to allocate the memory \n");
        return - 1;
    }

    printf("Enter the elment of the array : \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    PirmeNumbers(arr,size);


    return 0;
}
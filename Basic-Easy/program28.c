

/*
Count the even digits in every number of the array.
Input:
123 246 555

Output:
123 -> 1
246 -> 3
555 -> 0
*/
#include<stdio.h>
#include<stdlib.h>

void CountEvenDigit(int arr[], int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        int No = arr[i];
        count = 0;

        while(No != 0)
        {
            int digit = No % 10;
            
            if(digit % 2 == 0)
            {
                count++;
            }

            No = No / 10;
        }

        printf("%d -> ", arr[i]);
        printf("%d ", count);
        printf("\n");
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

    CountEvenDigit(arr,size);


    return 0;
}

#include<stdio.h>
#include<stdlib.h>

void Sumation(int arr[], int size)
{
    int sum = 0;

    for(int i = 0;  i < size; i++)
    {
        int No = arr[i];
        sum = 0;

        while(No != 0)
        {
            int digit = No % 10;
            sum += digit;
            No = No / 10;
        }  

        printf("%d ", sum);
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

    Sumation(arr, size);

    // printf("Sum is : %d", ret);

    return 0;
}
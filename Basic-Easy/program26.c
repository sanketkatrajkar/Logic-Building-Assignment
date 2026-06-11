


#include<stdio.h>
#include<stdlib.h>


void Multiples(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 11 == 0)
        {
            printf("%d ", arr[i]);
        }

        // printf(" ");
    }
}


int main()
{
    int length = 0;
    int *ptr = NULL;

    printf("Enter the size array : \n");
    scanf("%d", &length);

    ptr = (int *) malloc(length * (sizeof(int)));

    if(ptr == NULL)
    {
        printf("I");
        return -1;
    }

    for(int i = 0; i < length; i++)
    {
        scanf("%d", &ptr[i]);
    }

    Multiples(ptr, length);

    return 0;
}
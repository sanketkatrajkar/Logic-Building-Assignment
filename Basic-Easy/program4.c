

/*
4. Check if Array is Sorted

Platform: GFG

Example:

Input: [1,2,3,4,5]
Output: Yes
Input: [1,5,3]
Output: No

Concept:

Adjacent Comparison
*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isSorted(int arr[], int size)
{

    for(int i = 0; i < size - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            return false;
        }   
    }

    return true;
}



int main()
{
    int size = 0;
    int *arr = NULL;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    arr = (int *)malloc (size * sizeof(int));

    if(arr == NULL)
    {
        printf("Unble to allocate the memory : ");
        return -1;
    }

    printf("Enter the element of the array : ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    bool bRet = isSorted(arr , size);

    if(bRet)
    {
        printf("Array is sorted ");
    }
    else
    {
        printf("Array is not sorted ");
    }

    free(arr);

    return 0;
}
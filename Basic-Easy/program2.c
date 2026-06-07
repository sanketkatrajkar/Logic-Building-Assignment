

/*
2. Find Second Largest Element

Platform: GFG / LeetCode

Example:

Input: [10, 20, 5, 15]
Output: 15

Input : [3, 1, 7, 4, 2]
Ouput : 4

*/


#include<stdio.h>
#include<stdlib.h>

int SecondMaximum(int arr[], int size)
{
    int max = arr[0];
    int secondMax = arr[1];

    for(int i = 1; i < size; i++)
    {
        if(max < arr[i])
        {
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main()
{
    int size = 0;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    int *arr = (int *) malloc (size * sizeof(int));

    printf("Enter the element of the Array : ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int iRet = SecondMaximum(arr, size);

    printf("Second Maximum element of the array : %d ", iRet);

    free(arr);

    return 0;
}
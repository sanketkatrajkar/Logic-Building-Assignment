///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c 
// Author      :  Sanket Ashok Katrajkar
// Date        :  04/06/2025
///////////////////////////////////////////////////////////////////////////////
//
// Description : Accept N numbers from user and one number NO,
//               and return the frequency of NO in that array.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int CountFrequancy(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *ptr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d", &iLength);

    printf("Enter the number to check frequency:\n");
    scanf("%d", &iValue);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = CountFrequancy(ptr, iLength, iValue);
    printf("Frequency of %d is: %d\n", iValue, iRet);

    free(ptr);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c 
// Author      :  Sanket Ashok Katrajkar
// Date        :  04/06/2025
///////////////////////////////////////////////////////////////////////////////
//
// Description : Accept N numbers from user and one number NO,
//               and return the NO is present or not
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;
    BOOL  iRet = false;

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

    iRet = check(ptr, iLength, iValue);

    if(iRet == true )
    {
        printf("Number  is present");
    }
    else
    {
        printf("Number is  not present");
    }

    free(ptr);

    return 0;
}

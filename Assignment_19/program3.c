

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.java 
// Author      :  Sanket Ashok Katrajkar
// Date        :  04/06/2025
///////////////////////////////////////////////////////////////////////////////
// 
// Description :  Accept the Number and check wheather number 11 is present or not.
// 
/////////////////////////////////////////////////////////////////////////////////

/*
      Input :
          N :   6 
    Element :  85 66 3 11 55 88
    
     Output :  11 is present.

    Input :
        N :   6 
    Element :  85 66 3 10 55 88
    
     Output :  11 is Not present.

*/

#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

bool check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }

    }
    return false;

}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element :%d\n",iCnt +1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = check(ptr,iLength);

    if(iRet == true)
    {
        printf("11 is present\n",iRet);
    }
    else
    {
        printf("11 not present\n",iRet);

    }

    free(ptr);

    return 0;
}






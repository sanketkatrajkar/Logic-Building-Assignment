

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.java 
// Author      :  Sanket Ashok Katrajkar
// Date        :  04/06/2025
///////////////////////////////////////////////////////////////////////////////
// 
// Description :  Accept the Number from the user return the diffance between frequancy of even number and odd number:
// 
/////////////////////////////////////////////////////////////////////////////////

/*
      Input :
          N :   6 
    Element :  85 66 3 80 55 88
    
     Output :  3

*/


#include<stdio.h>
#include<stdlib.h>

int EvenCount(int Arr[], int iLength)
{
    int iCnt = 0, iEvenCount = 0 ,iOddCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCount++;
        }
        else if(Arr[iCnt] % 2 != 0)
        {
            iOddCount++;
        }
    }


    return iEvenCount - iOddCount;

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

    iRet = EvenCount(ptr,iLength);

    printf("%d",iRet);

    free(ptr);

    return 0;
}






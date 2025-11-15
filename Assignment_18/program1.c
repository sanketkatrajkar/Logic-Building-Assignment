///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.java 
// Author      :  Sanket Ashok Katrajkar
// Date        :  04/06/2025
///////////////////////////////////////////////////////////////////////////////
// 
// Description :  Accept the Number from the user and give me the difference betwee samation
//                of even elements  and odd elements. 
// 
/////////////////////////////////////////////////////////////////////////////////

/*
      Input :
          N :   6 
    Element :  85 66 3 80 93 88
    
     Output : 53 (243 - 181)

*/

#include<stdio.h>
#include<stdlib.h>

int SummationDiff(int Arr[], int iSize)
{
    int iCnt = 0, iEven = 0, iOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if( iCnt % 2 == 0)
       {
          iEven = iEven + Arr[iCnt];
       }
       else
       {
          iOdd = iOdd + Arr[iCnt];
       }
    }
    return iOdd - iEven;
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
        printf("Enter element :%d",iCnt +1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Summation(ptr,iLength);
    
    printf("Summation is : %d\n",iRet);

    free(ptr);

    return 0;
}




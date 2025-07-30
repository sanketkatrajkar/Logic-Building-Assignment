

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.java 
// Author      :  Sanket Ashok Katrajkar
// Date        :  04/06/2025
///////////////////////////////////////////////////////////////////////////////
// 
// Description :  Accept the Number from the user and display the which are divisible by 3 and 5.
// 
/////////////////////////////////////////////////////////////////////////////////

/*
      Input :
          N :   6 
    Element :  85 66 3 80 15 88
    
     Output :  15

*/


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if(( Arr[iCnt] % 3 == 0) && (Arr[iCnt] % 5 == 0))
       {
          printf("%d ",Arr[iCnt]);
       }
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
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

    Display(ptr,iLength);

    free(ptr);

    return 0;
}




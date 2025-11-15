///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Accept the Nuber from user and display pattern.
// Autor       :  Sanket Ashok Katrajkar
// Date        :  19/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input :  8 
    Output:  2   4  6  8  10 12  14  16
*/
//Time Complexity = O(N)

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt  <= iNo; iCnt++)
    {
        printf(" %d \t",iCnt * 2);
    }

    printf("\n");
   
}


int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}


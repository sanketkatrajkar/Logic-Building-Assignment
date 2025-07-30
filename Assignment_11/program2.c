///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Accept the Nuber from user and display pattern.
// Autor       :  Sanket Ashok Katrajkar
// Date        :  19/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : 5  
    Output: 5  *  4  *  3  *  2  *  1  *
*/
//Time Complexity = O(N)

#include<stdio.h>

void Display( int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d \t * \t",iCnt);
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


// .Write a program which accept number from user and return the count of even digits.
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  accept number from user and return the count of even digits.
// Autor       :  Sanket Ashok Katrajkar
// Date        :  15/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : 2395
    Output :1

    Input : 1018
    Output :2

    Input : 8462
    Output :4

*/
//Time Complexity = O(N)


#include<stdio.h>

int  EvenCount(int iNo)
{
    int iCnt = 0,  iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
        
        iNo = iNo / 10;
    }

    return iCnt;   
}

int main ()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);
    
    iRet = EvenCount(iValue);

    printf("%d\n",iRet);
    
    return 0;
}
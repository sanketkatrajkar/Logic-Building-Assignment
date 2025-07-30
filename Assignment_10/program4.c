// Write a program which accept number from user and return multiplication of all digits.
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.c
// Description :  accept number from user and return multiplication of all digits.
// Autor       :  Sanket Ashok Katrajkar
// Date        :  16/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : 2395
    Output :270

    Input : 1018
    Output :8

    Input : 9440
    Output :144

*/
//Time Complexity = O(N)
#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMul = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
        iMul = iMul * iDigit;
        }
        iNo = iNo / 10;
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);


    iRet = MultDigits(iValue);

    printf("%d\n",iRet);
    
    return 0;
}
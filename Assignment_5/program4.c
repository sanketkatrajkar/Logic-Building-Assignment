
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  
// Autor       :  Sanket Ashok Katrajkar
// Date        :  23/12/2025
///////////////////////////////////////////////////////////////////////////////

// Write the program accept the number from the user and display sumation of the non  factors numbers  

/*
    Input  : 6
    Output : 9
*/

#include<stdio.h>

int SumationFactors(int No)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= No; iCnt++)
    {
        if((No % iCnt ) != 0)
        {
           iSum = iSum + iCnt;
        }   
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d" , &iValue);

    iRet =  SumationFactors(iValue);

    printf("Sumation is : %d", iRet);

    return 0;
}
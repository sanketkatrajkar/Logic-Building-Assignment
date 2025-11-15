// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Accept number from user and return difference between summation of even digits and summation of odd digits.
// Autor       :  Sanket Ashok Katrajkar
// Date        :  16/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : 2395
    Output :-15 (2-17)

    Input : 1018
    Output :6 (8-2)

    Input : 5733
    Output :-18 (0-18)

*/
//Time Complexity = O(N)

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;
    
    while(iNo != 0)
    {
         iDigit = iNo % 10;

         if(iNo % 2 == 0)
         {
            iEvenSum = iEvenSum + iDigit;
         }
                  
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }

    return(iEvenSum - iOddSum);

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);


    iRet = CountDiff(iValue);

    printf("%d\n",iRet);
    
    return 0;
}
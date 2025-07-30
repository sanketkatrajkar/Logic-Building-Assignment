// Write a program which accept number from user and return the count of odd digits.
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  accept number from user and return the count of odd digits.
// Autor       :  Sanket Ashok Katrajkar
// Date        :  16/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : 2395
    Output :3

    Input : -1018
    Output :2

    Input : 8462
    Output :0

*/
//Time Complexity = O(N)


#include<stdio.h>

int CountOdd(int iNo)
{
   int iCnt = 0, iDigit = 0;

   while(iNo != 0)
   {
       iDigit = iNo % 10;

       if(iNo % 2 != 0)
       {
          iCnt++;
       }

       iNo = iNo / 10;
   }

   return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);


    iRet = CountOdd(iValue);

    printf("%d\n",iRet);
    
    return 0;
}
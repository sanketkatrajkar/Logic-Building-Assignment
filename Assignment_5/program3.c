
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  
// Autor       :  Sanket Ashok Katrajkar
// Date        :  23/12/2025
///////////////////////////////////////////////////////////////////////////////

// Write the program accept the number from the user and display the non  factors 

/*
    Input  : 12
    Output : 6 3 2 1
*/

#include<stdio.h>

void Multi(int No)
{
    int iCnt = 0;

    for(iCnt = No; iCnt >= 1; iCnt--)
    {
        if((No % iCnt ) != 0)
        {
           printf("%d ", iCnt);
        }   
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d" , &iValue);

    Multi(iValue);

    return 0;
}
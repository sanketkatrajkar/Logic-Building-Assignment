
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  
// Autor       :  Sanket Ashok Katrajkar
// Date        :  23/12/2025
///////////////////////////////////////////////////////////////////////////////

// Write the program accept the number from the user and display the multiplication of the factors 

/*
    Input :12
    Output :144


*/

#include<stdio.h>

int Multi(int No)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= No; iCnt++)
    {
        if((No % iCnt ) == 0)
        {
           iFact = iFact * iCnt;
        }   
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d" , &iValue);

    iRet = Multi(iValue);

    printf("Factors is : %d \n", iRet);

    return 0;
}
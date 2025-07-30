///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Accept the Nuber from user and display pattern.
// Autor       :  Sanket Ashok Katrajkar
// Date        :  19/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : 5  
    Output:  # 1 * # 2 * # 3 * # 4 * # 5 *
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

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# \t %d \t * \t",iCnt);
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


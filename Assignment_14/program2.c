///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Accept the Rows and columns from the user and display the given pattern.
// Author      :  Sanket Ashok Katrajkar
// Date        :  25/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : iRow = 5, iCol = 5
    Output:  2  4  6  8  10
             1  3  5  7  9
             2  4  6  8  10
             1  3  5  7   9                             
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    // int iCnt = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%d \t", j * 2);
            }
            else
            {
                printf("%d \t",(j * 2) - 1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows and Columns :\n");
    scanf("%d %d", &iValue1, &iValue2);

    Display(iValue1, iValue2);

    return 0;
}

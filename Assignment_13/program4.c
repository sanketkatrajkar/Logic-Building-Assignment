///////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.c
// Description :  Accept the Rows and columns from the user and display the given pattern.
// Author      :  Sanket Ashok Katrajkar
// Date        :  25/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : iRow = 3 , iCol = 4
    Output:  4  4  4  4
             3  3  3  3 
             2  2  2  2
             1  1  1  1
            
                           
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d \t",j);
        }

        printf("\n");
    }    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of Rows and Columns :\n");
    scanf("%d %d", &iValue1,&iValue2);

    Display(iValue1, iValue2);

    return 0;
}

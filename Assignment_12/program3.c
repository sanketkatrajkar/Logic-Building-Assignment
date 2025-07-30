///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Accept the Rows and columns form the user and display the given pattern.
// Autor       :  Sanket Ashok Katrajkar
// Date        :  25/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : iRow = 3 , iCol = 5
    Output:  5 4 3 2 1 
             5 4 3 2 1 
             5 4 3 2 1            
*/

#include<stdio.h>

void  Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf(" %d \t",j);
        }

        printf("\n");
    }

}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Entern the Row  Numbers :\n");
    scanf("%d",&iValue1);

    printf("Entern the columns Numbers :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}


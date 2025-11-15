///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Accept the Rows and columns form the user and display the given pattern.
// Autor       :  Sanket Ashok Katrajkar
// Date        :  25/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : iRow = 3 , iCol = 5
    Output:  1 1 1 1 1 
             2 2 2 2 2
             3 3 3 3 3 
             4 4 4 4 4 
             
                        
*/

#include<stdio.h>

void  Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf(" %d \t",i);
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


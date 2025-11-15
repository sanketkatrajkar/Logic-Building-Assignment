///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Accept the Rows and columns from the user and display the given pattern.
// Author      :  Sanket Ashok Katrajkar
// Date        :  25/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : iRow = 5, iCol = 5
    Output:  a b c d e
             1 2 3 4 5 
             a b c d e 
             1 2 3 4 5 
             a b c d e                             
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,ch = 'a'; j <= iCol; j++,ch++)
        {
            if(i % 2 != 0)
            {
                printf("%c \t",ch);
            }
            else
            {
                printf("%d \t",j);
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

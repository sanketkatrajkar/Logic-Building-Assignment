///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Accept the Rows and columns from the user and display the given pattern.
// Author      :  Sanket Ashok Katrajkar
// Date        :  25/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : iRow = 3 , iCol = 4
    Output:  A B C D 
             a b c d 
             A B C D 
             a b c d
             
             
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 = '\0';
    char ch2 = 'A';

    for(i = 1, ch1 = 'A'; i <= iRow; i++)
    {
        for(j = 1,ch2 = 'a'; j <= iCol; j++)
        {
            if((i % 2 ) == 0)
            {
                printf("%c \t", ch1);
                ch1++;
            }
            else
            {
                printf("%c \t",ch2);
                ch2++;
            }
        }
        printf("\n");
    } 
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of Rows:\n");
    scanf("%d", &iValue1);

    printf("Enter the Number of Columns:\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}

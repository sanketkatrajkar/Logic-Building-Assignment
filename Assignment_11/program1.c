///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Accept the Nuber from user and display pattern.
// Autor       :  Sanket Ashok Katrajkar
// Date        :  19/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : 5 
    Output: A  B  C  D  E
*/
//Time Complexity = O(N)

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c \t",ch);
        ch++;
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


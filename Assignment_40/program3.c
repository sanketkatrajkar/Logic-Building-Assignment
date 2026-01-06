
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  
// Autor       :  Sanket Ashok Katrajkar
// Date        :  06/01/2026
///////////////////////////////////////////////////////////////////////////////

// Write the program accept the number from the user and display 

/*
    Input  : 
    Output : 
*/

#include<stdio.h>

void Display()
{
    static int i = 5;

    if(i >= 1)
    {
        printf("%d\t", i);
        i--;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  10/09/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the string from the user and accept the one character form user 
                       and return the fist occarance of character
 */


#include<stdio.h>
#include<stdbool.h>

int firstOcc(char *str, char ch)
{
    int index = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return str;
        }
    }
}


int main()
{
    char arr[40] = {'\0'};
    char ch = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^\n]s", arr);
 
    printf("Enter character that you want to search : \n");
    scanf(" %c",&ch);

    iRet = firstOcc(arr, ch);

    printf("FistOccurance is %d ", iRet);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  10/09/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the string from the user and accept the one character form user 
                       check wheather character is present or not in string
 */


#include<stdio.h>
#include<stdbool.h>

bool isPresent(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }
        str++; 
    }

    return false;
}


int main()
{
    char arr[40] = {'\0'};
    char ch = '\0';
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^\n]s", arr);
 
    printf("Enter character that you want to search : \n");
    scanf(" %c",&ch);

    bRet = isPresent(arr, ch);

    if(bRet == true)
    {
        printf("character is present \n");
    }
    else 
    {
        printf("character is not present \n");
    }

    return 0;
}

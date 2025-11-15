//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/08/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the string from the user and convert into the lower case               
 */


#include<stdio.h>

void strlwr(char *str)
{
    while(*str != '\0')
    {
        if(*str > 'A' && *str < 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}


int main()
{
    char arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    strlwr(arr);

    printf(" updated string is %s : ", arr);

    return 0;
}



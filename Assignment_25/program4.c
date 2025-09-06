//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  06/09/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the string from the user and digit of the string
 */


#include<stdio.h>


void strtoggle(char *str)
{
    
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
           printf("%c",*str);
        }
        str++;
    }
}


int main()
{
    char arr[20] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    strtoggle(arr);

    return 0;
}



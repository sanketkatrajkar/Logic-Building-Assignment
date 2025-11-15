//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  06/09/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the string from the user and convert into the smaller to upper case and 
                       upper to smaller case  
                       
                       Toggle String program 
 */


#include<stdio.h>


void strtoggle(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
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

    printf("updated string  is %s ", arr);

    return 0;
}



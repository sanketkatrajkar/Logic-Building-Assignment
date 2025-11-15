//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  11/09/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the string from the user and copy the this string into another string
                       copy the only capital letters of it
 */


#include<stdio.h>

void StrCpy(char *str1 , char *str2)
{
    while(*str1 != '\0')                          //str1 =  SanketKatrakar'\0'
    {                                                                 
       str1++;
    }

    while(*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}

int main()
{
    char arr[70] = "Sanket";
    char brr[30] = " Katrajkar";
    
    // printf("Enter String : \n");
    // scanf("%[^'\n']s",arr);

    StrCpy(arr,brr);

    printf("%s",arr);

    return 0;
}
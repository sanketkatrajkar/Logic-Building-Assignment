//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  06/09/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the string from the user and convert into the upper case               
 */


#include<stdio.h>

// void strupr(char str[])
// {
//     char ch = '\0';

//     while(str[ch] != '\0')
//     {
//         if(str[ch] >= 'a' && str[ch] < 'z')
//         {
//             str[ch] = str[ch] -  32 ; //('A' - 'a');
//         }
//         str++;
//     }
// }

void strupr(char str[])
{
    char ch = '\0';

    while(str[ch] != '\0')
    {
        if(str[ch] >= 'a' && str[ch] <= 'z')
        {
            str[ch] = str[ch] -  32 ; //('A' - 'a');
        }
        str++;
    }
}


int main()
{
    char arr[20] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    strupr(arr);

    printf("updated string  is %s ", arr);

    return 0;
}



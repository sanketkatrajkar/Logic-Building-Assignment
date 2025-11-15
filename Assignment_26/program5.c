//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  11/09/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the string from the user and reverse that string in place
 */


#include<stdio.h>
#include<stdbool.h>

void StrRev(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
         temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}


int main()
{
    char arr[40] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^\n]s", arr);

    StrRev(arr);

    printf("New string is %s",arr);


    return 0;
}
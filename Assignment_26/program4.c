//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  11/09/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the string from the user and accept the one character form user 
                       and return the last occarance of character
 */


#include<stdio.h>
#include<stdbool.h>

int LastOcc(char *str, char ch)
{
    int i= 0;
    int index = 0;

    while(str[i] != '\0') // sanket katrajkar k 
    {
        if(str[i] == ch)
        {
            index = i;
        }
        i++;
    }

    return index;
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

    iRet = LastOcc(arr, ch);

    printf("LastOcc Occurance is %d ", iRet);

    return 0;
}
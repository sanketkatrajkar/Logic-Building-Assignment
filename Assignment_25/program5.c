//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  06/09/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the string from the user and count the spaces of string
 */


#include<stdio.h>

int countSpace(char *str )
{
   int iCount = 0;

   while(*str != '\0')
   {
     if(*str == ' ')
     { 
        iCount++;
     }
     str++;
   }

   return iCount;
}


int main()
{
    char arr[40] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",arr);
 
    iRet = countSpace(arr);
    printf(" Number of the spaces %d ",iRet);

    return 0;
}



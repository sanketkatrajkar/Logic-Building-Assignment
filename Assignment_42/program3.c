#include<stdio.h>


int Count(char *str)
{
    static int count = 0;

    if(*str != '\0')
    {
        count++;

        Count(str + 1);
    }

    return count;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%s", arr);

    iRet = Count(arr);

    printf("Characters are : %d", iRet);

    return 0;
}
#include<stdio.h>

int Display(int iNo)
{
    static int sum = 0;
    static int digit = 0;

    if(iNo != 0) //756
    {
        digit = iNo % 10;
        sum = sum + digit;
        iNo = iNo / 10;

        Display(iNo);
    }

    return sum;
}


int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iNo);

    iRet = Display(iNo);

    printf("Addition of the digits are : %d", iRet);

    return 0;
}
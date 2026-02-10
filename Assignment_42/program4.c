#include<stdio.h>


int ProductFactors(int iNo)
{
    static int i = 1;
    static int iProd = 1;

    if (i <= iNo)
    {
        if (iNo % i == 0)
        {
            iProd = iProd * i;
        }
        i++;
        ProductFactors(iNo);
    }

    return iProd;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = ProductFactors(iValue);

    printf("Fact are : %d", iRet);

    return 0;
}
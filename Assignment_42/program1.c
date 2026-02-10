// 5 * 4 * 3 * 2 * 1

#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;

    if()
    {
        printf("%d\t*\t",i);
        i--;
        Display(iNo); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}



#include<stdio.h>

void DisplaySchedule(char ch)
{
    if(ch == 'A')
    {
        printf("Your time is 8");
    }
    else if(ch == 'B')
    {
        printf("Your time is 9");
    }
    else if(ch == 'c')
    {
        printf("Your time is 9");
    }
    else if(ch == 'd')
    {
        printf("Your time is 10");
    }
    else 
    {
        printf("there is no such division");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division \n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}
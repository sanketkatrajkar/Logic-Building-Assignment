#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char str[50];
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

// Insert Last
void InsertLast(PPNODE First, char name[])
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    strcpy(newn->str, name);
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

// Display
void Display(PNODE First)
{
    while (First != NULL)
    {
        printf("%s -> ", First->str);
        First = First->next;
    }

    printf("NULL\n");
}

// Count Vowels
int CountVowels(PNODE First)
{
    int i = 0;
    int Count = 0;
    int Total = 0;

    while (First != NULL)
    {
        Count = 0;

        for (i = 0; First->str[i] != '\0'; i++)
        {
            if ((First->str[i] == 'a') || (First->str[i] == 'e') ||
                (First->str[i] == 'i') || (First->str[i] == 'o') ||
                (First->str[i] == 'u') || (First->str[i] == 'A') ||
                (First->str[i] == 'E') || (First->str[i] == 'I') ||
                (First->str[i] == 'O') || (First->str[i] == 'U'))
            {
                Count++;
            }
        }

        printf("%s = %d\n", First->str, Count);

        Total = Total + Count;

        First = First->next;
    }

    return Total;
}

// Main
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head, "Apple");
    InsertLast(&Head, "Cat");
    InsertLast(&Head, "Orange");

    printf("Linked List:\n");
    Display(Head);

    printf("\nVowel Count:\n");

    iRet = CountVowels(Head);

    printf("\nTotal Vowels = %d\n", iRet);

    return 0;
}
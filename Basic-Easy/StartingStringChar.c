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

// Display Linked List
void Display(PNODE First)
{
    while (First != NULL)
    {
        printf("%s -> ", First->str);
        First = First->next;
    }

    printf("NULL\n");
}

// Count Strings Starting With Given Character
int CountStartWith(PNODE First, char ch)
{
    int Count = 0;

    while (First != NULL)
    {
        if (First->str[0] == ch)
        {
            Count++;
        }

        First = First->next;
    }

    return Count;
}

// Main Function
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head, "Apple");
    InsertLast(&Head, "Ant");
    InsertLast(&Head, "Ball");
    InsertLast(&Head, "Animal");
    InsertLast(&Head, "Cat");

    printf("Linked List:\n");
    Display(Head);

    iRet = CountStartWith(Head, 'A');

    printf("\nCount = %d\n", iRet);

    return 0;
}
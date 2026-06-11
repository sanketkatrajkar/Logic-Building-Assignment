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

// Insert at Last
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

// Search String
int Search(PNODE First, char name[])
{
    while (First != NULL)
    {
        if (strcmp(First->str, name) == 0)
        {
            return 1;   // Found
        }

        First = First->next;
    }

    return 0;   // Not Found
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head, "Apple");
    InsertLast(&Head, "Banana");
    InsertLast(&Head, "Mango");

    printf("Linked List:\n");
    Display(Head);

    iRet = Search(Head, "Banana");

    if (iRet == 1)
    {
        printf("String Found\n");
    }
    else
    {
        printf("String Not Found\n");
    }

    return 0;
}
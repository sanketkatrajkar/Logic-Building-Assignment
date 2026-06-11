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

// Reverse Linked List
void Reverse(PPNODE First)
{
    PNODE prev = NULL;
    PNODE current = NULL;
    PNODE next = NULL;

    current = *First;

    while (current != NULL)
    {
        next = current->next; 
        current->next = prev;
        prev = current;
        current = next;
    }

    *First = prev;
}

// Main Function
int main()
{
    PNODE Head = NULL;

    InsertLast(&Head, "Pune");
    InsertLast(&Head, "Mumbai");
    InsertLast(&Head, "Nagpur");
    InsertLast(&Head, "Nashik");

    printf("Before Reverse:\n");
    Display(Head);

    Reverse(&Head);

    printf("\nAfter Reverse:\n");
    Display(Head);

    return 0;
}
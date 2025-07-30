///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c 
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/07/2025
///////////////////////////////////////////////////////////////////////////////
// 
// Description : Reverse Number
/////////////////////////////////////////////////////////////////////////////////

/*
      
    Element :  11 -> 28 -> 17 -> 41 -> 6 -> 89 -> NULL
    
     Output :  11 82 71 14 

*/

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)  
    {
        *first = newn;
    }
    else                    
    {
        newn->next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL) 
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }

    printf("NULL\n");
}

void Product(PNODE first)
{
    int num = 0, digit = 0, prod = 0;

    while(first != NULL)
    {
        num = first->data;
        prod = 1;

        if (num == 0)
        {
            prod = 0;  
        }
        else
        {
            while(num != 0)
            {
                digit = num % 10;
                if (digit != 0)
                {
                    prod = prod * digit;
                }
                num = num / 10;
            }
        }

        printf("%d\t", prod);
        first = first->next;
    }

    printf("\n");
}


int main()
{
    PNODE head = NULL;

    InsertFirst(&head,11);
    InsertFirst(&head,28);
    InsertFirst(&head,6);
    InsertFirst(&head,48);
    InsertFirst(&head,17);
    InsertFirst(&head,89);
    InsertFirst(&head,898);

    Product(head);

    return 0;
}
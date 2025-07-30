///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c 
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/07/2025
///////////////////////////////////////////////////////////////////////////////
// 
// Description :  Display the Prime Number.
// 
/////////////////////////////////////////////////////////////////////////////////

/*
      
    Element :  11 -> 28 -> 17 -> 41 -> 6 -> 89 -> NULL
    
     Output :  11 17 89

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

int isPrime(int num)
{
    for(int i = 2; i * i <= num ; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void DisplayPrime(PNODE first)
{
    printf("Prime number are : ");

    while(first != NULL)
    {
        if(isPrime(first->data))
        {
            printf("%d ", first->data);
        }
        first = first->next;
    }

    printf("\n");
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,11);
    InsertFirst(&head,28);
    InsertFirst(&head,6);
    InsertFirst(&head,48);
    InsertFirst(&head,17);
    InsertFirst(&head,89);

    DisplayPrime(head);

    return 0;
}
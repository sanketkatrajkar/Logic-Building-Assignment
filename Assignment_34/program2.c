///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c 
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/07/2025
///////////////////////////////////////////////////////////////////////////////
// 
// Description :  Write the program which search the last Occurance of the singly linear linked list,
// 
/////////////////////////////////////////////////////////////////////////////////

/*
      Input :  30
    Element :  10 -> 20 -> 30 -> 40 -> 50 -> 30 -> 70 -> NULL
    
     Output :  3

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

int SearchLastOcc(PNODE first, int no)
{
    int target = 1;
    int pos = - 1;

    while(first != NULL)
    {
        if(first -> data == no)
        {
          pos = target;
        }
        first = first -> next;
        target++;
    }
    
    return pos;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);

    iRet = SearchLastOcc(head,30);

    printf("%d",iRet);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c 
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/07/2025
///////////////////////////////////////////////////////////////////////////////
// 
// Description :  Write the program which is addition of the liked list in singly linear LL
// 
/////////////////////////////////////////////////////////////////////////////////

/*
      
    Element :  10 -> 20 -> 30 -> 40 -> 50 -> -> NULL
    
     Output :  150

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

int Addition (PNODE first)
{
   int sum = 0;

   while(first != NULL)
   {
      sum = sum + first -> data;
      first = first -> next; 
   }

   return sum;
}

int Maximum(PNODE first)
{
    int iMax = first -> data;
    //  first = first->next;
    
    while(first != NULL)
    { 
        if(first -> data > iMax)
        {
            iMax = first ->data;
        }

         first = first->next;
    }

    return iMax;
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);
    iRet = Addition(head);
    printf(" Addition  is \n: %d",iRet);

    Display(head);
    iRet = Maximum(head);
    printf("Maximum Element is : %d",iRet);

    return 0;
}
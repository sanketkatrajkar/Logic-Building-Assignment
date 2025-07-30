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

void Palindrome(PNODE first)
{
    int num = 0, rev = 0, temp = 0;

    while(first != NULL)
    {
        num = first->data;
        temp = num;
        rev = 0;

    while(num != 0)
    {
        int digit =  num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if(temp == rev)
    {
        printf("%d ",temp);
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
    InsertFirst(&head,898);

    Palindrome(head);

    return 0;
}
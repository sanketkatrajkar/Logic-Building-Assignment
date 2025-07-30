///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c 
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/07/2025
///////////////////////////////////////////////////////////////////////////////
// 
// Description :  Display the perfect number.
// 
/////////////////////////////////////////////////////////////////////////////////

/*
      
    Element :  11 -> 28 -> 17 -> 41 -> 6 -> 89 -> NULL
    
     Output :  6 28 

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE
#define FALSE

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

int IsPerfect(int num)
{
    int sum = 0;       //11
    for(int i = 1; i <= num / 2; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    
    return (sum == num);
}

void DisplayPerfect(PNODE first)
{
    printf("Perfect Numbers are: ");

    while(first != NULL)
    {
        if(IsPerfect(first->data))
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

    InsertFirst(&head, 11);
    InsertFirst(&head, 28);
    InsertFirst(&head,6);
    InsertFirst(&head,48);
    InsertFirst(&head,17);
    InsertFirst(&head,89);

    DisplayPerfect(head);
    // printf(" %d",iRet);

    return 0;
}
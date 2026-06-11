#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

// Push : InsertFirst
void Push(struct node **First, int no)
{
    struct node *newn = new node;

    newn->data = no;
    newn->next = *First;
    *First = newn;
}

// Pop : DeleteFirst
int Pop(struct node **First)
{
    struct node *temp = NULL;
    int value = 0;

    if (*First == NULL)
    {
        cout << "Stack is empty\n";
        return -1;
    }

    temp = *First;
    value = temp->data;

    *First = (*First)->next;
    delete temp;

    return value;
}

// Display
void Display(struct node *First)
{
    while (First != NULL)
    {
        cout << "| " << First->data << " | -> ";
        First = First->next;
    }

    cout << "NULL\n";
}

// Count
int Count(struct node *First)
{
    int iCount = 0;

    while (First != NULL)
    {
        iCount++;
        First = First->next;
    }

    return iCount;
}

int main()
{
    struct node *Head = NULL;
    int iRet = 0;

    Push(&Head, 51);
    Push(&Head, 21);
    Push(&Head, 11);

    Display(Head);

    cout << "Count : " << Count(Head) << endl;

    iRet = Pop(&Head);
    cout << "Popped Element : " << iRet << endl;

    iRet = Pop(&Head);
    cout << "Popped Element : " << iRet << endl;

    Display(Head);

    cout << "Count : " << Count(Head) << endl;

    return 0;
}
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *first = NULL;
int iCount = 0;

// Insert Last
void Enqueue(int no)
{
    struct node *newn = new node;
    struct node *temp = NULL;

    newn->data = no;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    iCount++;
}

// Delete First
int Dequeue()
{
    struct node *temp = NULL;
    int value = 0;

    if (first == NULL)
    {
        cout << "Queue is empty\n";
        return -1;
    }

    temp = first;
    value = temp->data;

    first = first->next;
    delete temp;

    iCount--;

    return value;
}

// Display Queue
void Display()
{
    struct node *temp = first;

    while (temp != NULL)
    {
        cout << "| " << temp->data << " | -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

// Count Elements
int Count()
{
    return iCount;
}

int main()
{
    int iRet = 0;

    Enqueue(51);
    Enqueue(21);
    Enqueue(11);

    Display();

    cout << "Count : " << Count() << endl;

    iRet = Dequeue();
    cout << "Removed : " << iRet << endl;

    iRet = Dequeue();
    cout << "Removed : " << iRet << endl;

    Display();

    cout << "Count : " << Count() << endl;

    return 0;
}
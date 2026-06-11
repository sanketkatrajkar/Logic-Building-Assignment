

/*

Reverse every number in the array.
Input:
12 450 1234

Output:
21 54 4321

*/
#include<iostream>
using namespace std;

void ReverseDigit(int arr[], int size )
{
   for(int i = 0; i < size; i++) 
   {
       int No = arr[i];
       int revers = 0;

       while(No != 0)
       {
         int digit = No % 10;
         revers = revers * 10 + digit;
         No = No / 10;
       }

       cout << arr[i] << " -> " << revers << endl;
   }
}

int main()
{
    int size = 0;

    cout << "Enter the size of array : ";
    cin >> size;

    int *arr = new int[size];

    if(arr == NULL)
    {
        cout << "Unalle to allocate the memory of the array : ";
        return - 1;
    }

    cout << "Enter the element of the array : " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    ReverseDigit(arr, size);

    return 0;
}
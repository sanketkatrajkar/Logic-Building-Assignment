/*
3. Reverse an Array

Platform: LeetCode

Example:

Input: [1,2,3,4,5]
Output: [5,4,3,2,1]

Concept:

Two Pointers
*/

#include<iostream>
using namespace std;

void Revers(int arr[], int size)
{
    int start = 0;
    int end = size - 1;          

    while(start < end)
    {
        int temp    = arr[start];
        arr[start]  = arr[end];
        arr[end]    = temp;
        start++;                 
        end--;                   
    }
}

int main()
{
    int size = 0;

    cout << "Enter the size of the element : "; 
    cin  >> size;                                 

    int* arr = new int[size];

    cout << "Enter the element of the array : ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    Revers(arr, size);

    cout << "Reversed array : ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;             

    return 0;
}
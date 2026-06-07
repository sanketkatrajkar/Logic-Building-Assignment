
/*
1. Find Maximum Element in Array

Platform: GFG

Example:

Input: [10, 5, 20, 8]
Output: 20

*/

#include<iostream>
using namespace std;

int Maximum(int arr[] , int size)
{
    int iMax = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(iMax < arr[i])
        {
            iMax = arr[i];
        }
    }

    return iMax;
}


int main()
{
    int size = 0;

    cout << "Enter the size of the Array : " << endl;
    cin >> size;

    int *arr = new int[size];

    cout << "Enter the element of the array : " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ret = Maximum(arr, size);

    cout << "Maximum element of the array : " << ret << endl;

    delete [] arr;

    return 0;
}
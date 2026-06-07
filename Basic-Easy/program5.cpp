

/*
5. Move All Zeros to End

Platform: LeetCode 283

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

*/

#include<iostream>
using namespace std;

void Movezero(int arr[],  int size )
{
    int j = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    while(j < size)
    {
        arr[j] = 0;
        j++;
    }
}


int main()
{
    int size = 0;
    int * arr  = NULL;

    cout << "Enter the size of the Array : ";
    cin >> size;

    arr = new int[size];

    if(arr == NULL)
    {
        cout << "Unable to allocate the memory";
        return -1;
    }

    cout << "Enter the element of the array : ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    Movezero(arr , size);

    cout << "After moving the array : ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    delete [] arr;
    
    return 0;
}
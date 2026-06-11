
/*

Find the largest digit in every number.

*/
#include<iostream>
using namespace std;

void LargestDigit(int arr[], int size)
{
    int max = 0;

    for(int i = 0; i < size; i++)
    {
        int No = arr[i];
        max = 0;

        while(No != 0)
        {
            int digit = No % 10;

            if(digit > max)
            {
                max = digit;
            }

            No = No / 10;
        }

        // printf("%d -> %d ", arr[i], count);
        cout << arr[i] << " -> " << max << endl;
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

    LargestDigit(arr, size);

    return 0;
}
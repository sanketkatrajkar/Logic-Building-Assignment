#include <iostream>
using namespace std;

int uniqueElement(int arr[], int size)
{
    int xorSum = 0;

    for (int i = 0; i < size; i++)
    {
        xorSum = xorSum ^ arr[i];
    }

    return xorSum;
}

int main()
{
    int size;

    cout << "Enter the size of the array : ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = uniqueElement(arr, size);

    cout << "Unique Element is : " << ans << endl;

    delete[] arr;

    return 0;
}
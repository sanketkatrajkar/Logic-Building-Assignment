
#include<iostream>  
#include<vector>    
using namespace std;

int Mejority(int arr[], int size)
{
    int ans = 0, freq = 0;

    for(int i = 0; i < size; i++)
    {
        if(freq == 0)
        {
            ans = arr[i];
        }

        if(ans == arr[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    return ans;
}


int main()
{
    int size = 0;

    cout << "Enter the size of the array : " << endl;
    cin >> size;

    int * arr = new int[size];

    if(arr == NULL)
    {
        cout << "Unble to allocate the memory : " << endl;
        return -1;
    }

    cout << "Enter element of the array : " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = Mejority(arr, size);

    cout << "Mejority element is : " << ans << endl;

    delete [] arr;

    return 0;
}
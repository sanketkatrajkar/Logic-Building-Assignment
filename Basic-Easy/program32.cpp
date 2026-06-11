

/*
Check whether digit 7 is present in every number.
Count how many times digit 3 appears in every number.
*/

#include<iostream>
using namespace std;


//Count how many times digit 3 appears in every number.

void CountDigit(int arr[], int size, int find)
{
    int count = 0;
    

    for(int i = 0; i < size; i++)
    {
        int No = arr[i];

        while(No != 0)
        {
            int digit = No % 10;

            if(digit == find)
            {
                count++;
            }

            No = No / 10;
        }
    }

    cout << "Digit is present in Array of every element are : " << count << endl;

}



// Input : 127 417 147 123 527 235 
// Number check : 7
//Output : not present in every element

// Input : 127 417 147 173 527 735 
// Number check : 7
//Output : is present in every element

void isPresentDigit(int arr[], int size, int find)
{

    int count = 0;

    for(int i = 0; i < size; i++)
    {
        int No = arr[i];
        int present = 0;

        while(No != 0)
        {
            int digit = No % 10;

            if(digit == find)
            {
                count++;
            }
            
            if(digit == find)
            {
                present = 1;
                break;
            }

            No = No / 10;
        }

        if (present == 0)
        {
            printf("Not Present in Every Element\n");
            return;
        }
    }

     cout << "Element is present in every element of Array \n" << endl;
     cout << "Digit is present in Array of every element are : " << count << endl;
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

    int find = 0;
    cout << "Enter the Number that you want to search : \n";
    cin >> find;

    isPresentDigit(arr, size, find);

    // CountDigit(arr, size, find);

    delete [] arr;

    return 0;
}
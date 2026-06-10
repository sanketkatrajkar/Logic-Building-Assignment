
/*
1. Remove Duplicates from Sorted Array

LeetCode 26

Input: [1,1,2,2,3]
Output: 3
Array: [1,2,3]

Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]

Concept: Two Pointers
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Removeduplicate(int arr[], int size)
{
    vector<int> nums;

    for(int i = 0; i < size; i++)
    {
        if(find(nums.begin(), nums.end(), arr[i]) == nums.end())
        {
            nums.push_back(arr[i]);
        }
    }

    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
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

    Removeduplicate(arr, size);
    
    // int Ret =  Removeduplicate(arr, size);

    // cout << "After removing the lenthe of the array : "<< Ret << endl;

    delete [] arr;

    return 0;
}
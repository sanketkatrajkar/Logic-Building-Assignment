



/*
10. Check Anagram

Platform: LeetCode 242

Example:

Input:
s = "listen"
t = "silent"

Output:
True

Concept:

Frequency Array
Hashing
*/


#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string &str1, string &str2)
{
    int arr[26] = {0};
    
    for(int i = 0; i < str1.length(); i++)
    {
        if(str1[i] >= 'a' && str1[i] <= 'z')
        {
            arr[str1[i] - 'a']++;
        }

        if(str2[i] >= 'a' && str2[i] <= 'z')
        {
            arr[str2[i] - 'a']--;
        }
    }

   
    for(int j = 0; j < 26; j++)
    {
        if(arr[j] != 0)
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    string str1;
    string str2;

    cout << "Enter first String : " << endl;
    getline(cin , str1);

    cout << "Enter second string : " << endl;
    getline(cin , str2);

    if(isAnagram(str1, str2))
    {
        cout << "Anagram " << endl;
    }
    else
    {
        cout << "Not Anagram " << endl;
    }

    return 0;
}
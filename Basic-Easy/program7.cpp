

/*
7.Count Vowels in String

Platform: Common Interview Question

Example:

Input: "education"
Output: 5

Concept:

String Traversal
*/

#include<iostream>
#include<string>
using namespace std;

int CountVowels(string &str)
{
    int count = 0;
    
    for(int i = 0; i < str.size(); i++)
    {
        char ch = str[i];

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }

    return count;
}


int main()
{
    string str;
    int ret = 0;

    cout << " Enter String : ";
    getline(cin , str);

    ret = CountVowels(str);

    cout << "Vowels in string are : " << ret << endl;

    return 0;
}

/*
Print alternate words.
Input: India is my country
Output: India my
*/

#include<iostream>
#include<string>
using namespace std;

void AlternateWord(string &str)
{
    string temp = "";
    int wcount = 0;

    for(int i = 0; i <= str.size(); i++)
    {
        if(str[i] != ' ' && i < str.size())
        {
            temp += str[i];
        }
        else
        {
            if(wcount % 2 == 0)
            {
                cout << temp << " ";
            }

            temp = "";
            wcount++;
        }
    }
}

int main()
{
    string str;
    string word;

    cout << "Enter string : ";
    getline(cin , str);

    AlternateWord(str);

    return 0;
}
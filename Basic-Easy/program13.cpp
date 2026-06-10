/*
Input

India is my country

Output

country my is India

*/

#include<iostream>
using namespace std;

void stringReverse(string &str)
{
    int len = 0;

    while(str[len] != '\0')
    {
        len++;
    }

    for(int i = len - 1; i >= 0; i--)
    {
        if(str[i] == ' ')
        {
            for(int j = i + 1; str[j] != '\0' && str[j] != ' '; j++)
            {
                cout << str[j];
            }

            cout << " ";
        }
    }

    for(int i = 0; str[i] != '\0' && str[i] != ' '; i++)
    {
        cout << str[i];
    }
}

int main()
{
    string str;

    cout << "Enter the string : ";
    getline(cin, str);

    stringReverse(str);

    return 0;
}
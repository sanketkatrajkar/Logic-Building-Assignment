
/*
Input
India is my country
Output
aidnI si ym yrtnuoc
*/

#include <iostream>
using namespace std;


void ConvertUppercase(string &str)
{
    int i = 0;                         

    while(str[i] != '\0')              
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;  
        }
        i++;
    }
}


void ReverseEachWord(string &str)
{
    int start = 0;
    int end = 0;

    while (str[end] != '\0')
    {
        // Find end of current word
        while (str[end] != ' ' && str[end] != '\0')
        {
            end++;
        }

        // Print current word in reverse
        for (int i = end - 1; i >= start; i--)
        {
            cout << str[i];
        }

        // Print space if it exists
        if (str[end] == ' ')
        {
            cout << " ";
            end++;
            start = end;
        }
    }
}

int main()
{
    string str;
    int i = 0;

    cout << "Enter string: ";
    getline(cin, str);

    ReverseEachWord(str);

    cout << endl;

    ConvertUppercase(str);

    cout << str << endl;

    return 0;
}
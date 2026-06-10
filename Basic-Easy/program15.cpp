
/*
 Input : 
 India is my country 
 
 Output : 
 Country My Is India (reverse word order + first letter capital)

*/

#include <iostream>
#include<string>
using namespace std;


void ReverseEachWord(string &str)
{
    int i = 0;
    int len = 0;

    while(i < str.size())
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

    cout << "Enter string: ";
    getline(cin, str);

    ReverseEachWord(str);


    return 0;
}
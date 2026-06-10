#include<iostream>
#include<string>
using namespace std;

string RemoveSpace(string &str)
{
    string result = "";              // नवीन string

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] != ' ')           // space नाही → add करा
        {
            result += str[i];
        }
    }

    return result;
}

int main()
{
    string str;

    cout << "Enter string : ";
    getline(cin, str);

    cout << "Before : " << str << endl;

    string result = RemoveSpace(str);

    cout << "After  : " << result << endl;

    return 0;
}
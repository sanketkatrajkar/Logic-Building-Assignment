

#include<iostream>
#include<string>
using namespace std;

int LastOcc(string &str, char ch)
{
    int index = -1;              

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == ch)
        {
            index = i;          
        }
    }

    return index;
}

int main()
{
    string str;
    char ch;

    cout << "Enter string    : ";
    getline(cin, str);

    cout << "Enter character : ";
    cin  >> ch;

    int ret = LastOcc(str, ch);

    if(ret == -1)
        cout << ch << " not found" << endl;
    else
        cout << "Last occurrence : " << ret << endl;

    return 0;
}
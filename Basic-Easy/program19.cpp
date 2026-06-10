

#include<iostream>
#include<string>
using namespace std;

char NonReapting(string &str)
{
    int freq[26] = {'\0'};

    for(int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(freq[str[i] - 'a'] == 1)
        {
            return str[i];
        }
    }

    return '$';

}

int main()
{
    string str;

    cout << "Enter string : ";
    getline(cin , str);

    char ch = NonReapting(str);

    cout << "First non reapting character : " << ch << endl;


    return 0;
}
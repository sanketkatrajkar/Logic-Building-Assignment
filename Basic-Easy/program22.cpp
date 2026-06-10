

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void SubStrings(string &str)
{
    // vector<string> sub;

    for(int i = 0; i < str.size(); i++)
    {
        for(int j = i; j < str.size(); j++)
        {
            // sub.push_back(str[j]);

            // sub.push_back(str.substr(i, j - i + 1));

            for(int k = i; k <= j; k++)
            {
                cout << str[k];
            }
            cout << " ";
        }
    }

    // for(int i = 0; i < sub.size(); i++)
    // {
    //     cout << sub[i] << " ";
    // }

    cout << endl;
}


int main()
{
    string str;

    cout << "Enter string : ";
    getline(cin , str);

    SubStrings(str);

    // cout << str << endl;

    return 0;
}
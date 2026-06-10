//Input : "aaabbbccdd"
//Ouput : "a3b3c2d2"


#include<iostream>
#include<string>
using namespace std;

string Compress(string &str)
{
    int count = 0;
    string result = "";

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            result += str[i];
            result += to_string(count);
            count = 1;
        }
    }

    return result;
}

int main()
{
    string str;

    cout << "Enter string : ";
    getline(cin , str);

    string result = Compress(str);

    cout << result << endl;

    return 0;
}
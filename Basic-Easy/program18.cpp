


#include<iostream>
#include<string>
using namespace std;

string LongestWord(string &str)
{
    int i           = 0;
    int maxlen      = 0;
    string word     = "";
    string maxword  = "";

    while(i < str.size())
    {
        if(str[i] != ' ')         
        {
            word += str[i];
        }
        else                        
        {
            if(word.size() > maxlen)
            {
                maxlen  = word.size();
                maxword = word;     
            }
            word = "";              
        }

        i++;
    }

    if(word.size() > maxlen)
    {
        maxword = word;
    }

    return maxword;
}

int main()
{
    string str;

    cout << "Enter string : ";
    getline(cin, str);

    string ret = LongestWord(str);

    cout << "Longest word : " << ret << endl;

    return 0;
}
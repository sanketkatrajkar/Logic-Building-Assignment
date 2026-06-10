


#include<iostream>
#include<string>
using namespace std;

int freqWord(string &str, string &word)
{
    int count = 0;
    string result = "";

    for(int i = 0; i <= str.size(); i++)
    {
        if(str[i] != ' ' && i != str.size())
        {
            result += str[i];
        }
        else
        {
            if(result == word)
            {
                count++;
            }

            result = "";
        }
    }
      
    return count;  
}

int main()
{
    string str;
    string word;

    cout << "Enter string : ";
    getline(cin , str);

    cout << "Enter word :";
    getline(cin, word);

    int result = freqWord(str, word);

    cout << result << endl;

    return 0;
}
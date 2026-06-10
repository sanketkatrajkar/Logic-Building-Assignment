


/*
 Input : 
 India is my country 
 
 Output : 
 India is my country → India_is_my_country (replace spaces with _)

*/

#include <iostream>
#include<string>
using namespace std;



// (replace spaces with _)
void Replace(string &str)
{
    int i = 0;
    while(i < str.size())
    {
        if(str[i] == ' ')
        {
            str[i] = '_';
        }

        i++;
    }
}


int main()
{
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    Replace(str);

    cout << str << endl;

    return 0;
}
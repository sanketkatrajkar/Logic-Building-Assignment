

#include<iostream>
#include<string>
using namespace std;

void Revers(string &str)
{
    int start = 0;
    int end = str.size() - 1;

    while(start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}


int main()
{
    string str;

    cout << "Enter the string : ";
    getline(cin, str);

    Revers(str);

    cout << "After Revers String " << str << endl;

    return 0;
}

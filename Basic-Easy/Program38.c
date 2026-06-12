#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;

    unordered_map<char, char> mp1;
    unordered_map<char, char> mp2;

    for (int i = 0; i < s1.length(); i++)
    {
        char c1 = s1[i];
        char c2 = s2[i];

        // Check mapping from s1 -> s2
        if (mp1.find(c1) != mp1.end())
        {
            if (mp1[c1] != c2)
                return false;
        }
        else
        {
            mp1[c1] = c2;
        }

        // Check reverse mapping s2 -> s1 (important)
        if (mp2.find(c2) != mp2.end())
        {
            if (mp2[c2] != c1)
                return false;
        }
        else
        {
            mp2[c2] = c1;
        }
    }

    return true;
}

int main()
{
    string s1, s2;

    cout << "Enter string 1: ";
    cin >> s1;

    cout << "Enter string 2: ";
    cin >> s2;

    if (isIsomorphic(s1, s2))
        cout << "Isomorphic Strings\n";
    else
        cout << "Not Isomorphic Strings\n";

    return 0;
}

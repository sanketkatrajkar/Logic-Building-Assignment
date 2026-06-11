

#include <iostream>
using namespace std;

bool Isomorphic(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }

    char map1[256] = {0};
    char map2[256] = {0};

    for (int i = 0; s1[i] != '\0'; i++)
    {
        // First time mapping
        if (map1[s1[i]] == 0 && map2[s2[i]] == 0)
        {
            map1[s1[i]] = s2[i];
            map2[s2[i]] = s1[i];
        }
        // Mapping mismatch
        else if (map1[s1[i]] != s2[i] || map2[s2[i]] != s1[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if (Isomorphic(s1, s2))
    {
        cout << "Strings are Isomorphic";
    }
    else
    {
        cout << "Strings are Not Isomorphic";
    }

    return 0;
}
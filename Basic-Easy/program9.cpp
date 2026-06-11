


/*
9. Count Frequency of Characters

Platform: HackerRank / GFG

Example:

Input: "aabbc"
Output:
a -> 2
b -> 2
c -> 1

Concept:

Array / Hashing
*/


#include<iostream>
#include<string>
using namespace std;

void CountFrequency(string &str)
{
    int freqLower[26] = {0};   
    int freqUpper[26] = {0};   

    int i = 0;
    while(i < str.size())
    {
        if(str[i] >= 'a' && str[i] <= 'z')        
        {
            freqLower[str[i] - 'a']++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')  
        {
            freqUpper[str[i] - 'A']++;
        }
        i++;
    }

    
    cout << "\nUppercase Frequency : " << endl;
    for(int j = 0; j < 26; j++)
    {
        if(freqUpper[j] > 0)
        {
            cout << (char)(j + 'A') << " -> " << freqUpper[j] << endl;
        }
    }

    cout << "\nLowercase Frequency : " << endl;
    for(int j = 0; j < 26; j++)
    {
        if(freqLower[j] > 0)
        {
            cout << (char)(j + 'a')<< " -> " << freqLower[j] << endl;
        }
    }
}

int main()
{
    string str;

    cout << "Enter String : ";
    getline(cin, str);

    CountFrequency(str);

    return 0;
}



//////////////////////////



// #include<iostream>
// #include<string>
// #include<unordered_map>
// using namespace std;

// void CountFrequency(string &str)
// {
//     unordered_map<char, int> hashMap;   // char → count

//     // Step 1 : hash map मध्ये frequency store करा
//     int i = 0;
//     while(i < str.size())
//     {
//         hashMap[str[i]]++;              // character key म्हणून वापर
//         i++;
//     }

//     // Step 2 : print करा
//     cout << "\nFrequency of characters : " << endl;
//     for(auto pair : hashMap)
//     {
//         cout << pair.first << " -> " << pair.second << endl;
//     }
// }

// int main()
// {
//     string str;

//     cout << "Enter String : ";
//     getline(cin, str);

//     CountFrequency(str);

//     return 0;
// }



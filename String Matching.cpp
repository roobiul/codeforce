// بسم الله الرحمن الرحيم
// محمد روبيول الإسلام
// roobiul~Githab

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#define ll long long int
#define ctt cout <<
#define Robiul                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

int countOccurrences(const string &str, const string &pattern)
{
    int count = 0;
    for (int i = 0; i <= str.length() - pattern.length(); i++)
    {
        bool match = true;
        for (int j = 0; j < pattern.length(); j++)
        {
            if (str[i + j] != pattern[j])
            {
                match = false;
                break;
            }
        }
        if (match)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string str, pattern;
    cin >> str >> pattern;
    cout << countOccurrences(str, pattern) << endl;
    return 0;
}
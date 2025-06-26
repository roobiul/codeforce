// بسم الله الرحمن الرحيم
// محمد روبيول الإسلام
// roobiul~Githab

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
#define ctt cout <<
#define Robiul                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

int main()
{

    Robiul;

    string i1n, s1;
    cin >> i1n >> s1;
    string s0 = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if (i1n == "R")
    {
        for (ll i = 0; i < s1.length(); i++)
        {
            for (ll j = 0; j < s0.length(); j++)
            {
                if (s1[i] == s0[j])
                {
                    ctt s0[j - 1];
                }
            }
        }
    }
    else if (i1n == "L")
    {
        for (ll i = 0; i < s1.length(); i++)
        {
            for (ll j = 0; j < s0.length(); j++)
            {
                if (s1[i] == s0[j])
                {
                    ctt s0[j + 1];
                }
            }
        }
    }

    return 0;
}
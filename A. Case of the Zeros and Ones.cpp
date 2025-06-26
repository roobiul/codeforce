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
    string s;
    ll k;
    cin >> k >> s;
    ll n = s.length(), c0 = 0, c1 = 0;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
            c1++;
        else
            c0++;
    }

    ctt abs(c1 - c0);

    return 0;
}
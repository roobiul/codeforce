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
    ll n;
    cin >> n;
    map<string, int> mp;
    string s;
    while (n--)
    {
        cin >> s;
        mp[s]++;
    }
    ll c = 0, d = 0;
    string t;
    map<string, int>::iterator itr;
    for (itr = mp.begin(); itr != mp.end(); itr++)
    {
        c = itr->second;
        if (c > d)
        {
            d = c;
            t = itr->first;
        }
    }
    ctt t << endl;

    return 0;
}
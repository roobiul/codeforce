// بسم الله الرحمن الرحيم
// محمد روبيول الإسلام
// roobiul~Githab

#include <iostream>
// #include <string>
// #include <bits/stdc++.h>
#include <map>
#define ll long long int
#define ctt cout <<
#define Robiul                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

void ans()
{
    ll n;
    cin >> n;
    ll i, v[n];
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> mp;
    for (i = 0; i < n; i++)
        mp[v[i]] = i + 1;

    for (i = 0; i < n; i++)
    {
        if (mp[i + 1] == v[i])
        {
            ctt 2 << endl;
            return;
        }
    }
    ctt 3 << endl;
}

int main()
{
    Robiul;

    ll t;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}
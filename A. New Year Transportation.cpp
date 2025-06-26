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

int main()
{
    Robiul;

    ll a, b;
    cin >> a >> b;
    ll arr[a];
    for (ll i = 0; i < (a - 1); i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < (a - 1);)
    {
        i += arr[i];
        if (i == b - 1)
        {
            ctt "YES" << endl;
            return 0;
        }
    }
    ctt "NO" << endl;

    return 0;
}
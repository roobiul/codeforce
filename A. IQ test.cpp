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
    ll n;
    cin >> n;
    ll arr[n], ev = 0, odd = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            ev++;
        else
            odd++;
    }
    if (ev > odd)
    {
        for (ll i = 0; i < n; i++)
            if (arr[i] % 2 != 0)
            {
                ctt i + 1 << endl;
                break;
            }
    }
    else
    {
        for (ll i = 0; i < n; i++)
            if (arr[i] % 2 == 0)
            {
                ctt i + 1 << endl;
                break;
            }
    }

    return 0;
}
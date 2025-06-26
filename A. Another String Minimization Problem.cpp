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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        map<int, int> mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ll mini, maxi;
            mini = min(x, (m + 1) - x);
            maxi = max(x, (m + 1) - x);

            if (mp[mini] == 0)
                mp[mini] = 1;
            else
                mp[maxi] = 1;
        }

        for (ll i = 1; i <= m; i++)
        {
            if (mp[i] == 0)
            {
                ctt "B";
            }
            else
            {
                ctt "A";
            }
        }

        ctt endl;
    }

    return 0;
}
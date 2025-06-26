// بسم الله الرحمن الرحيم
// محمد روبيول الإسلام
// roobiul~Githab

#include <iostream>
#include <string>
// #include <bits/stdc++.h>
#include <vector>
#define ll long long int
#define ctt cout <<
#define Robiul                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#include <algorithm>
using namespace std;
int main()
{
    Robiul;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, c, d;
        cin >> n >> c >> d;
        vector<ll> v(n * n), vv;
        for (ll i = 0; i < n * n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll a = v[0];
        for (ll i = 0; i < n; i++)
        {
            ll f = a;
            for (ll j = 0; j < n; j++)
            {
                vv.push_back(a);
                a += d;
            }
            a = f + c;
        }

        sort(vv.begin(), vv.end());
        if (v == vv)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
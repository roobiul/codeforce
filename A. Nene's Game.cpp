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
    ll t;
    cin >> t;
    ll a[109];
    while (t--)
    {
        ll q, k, n;
        cin >> k >> q;
        for (int i = 1; i <= k; i++)
            cin >> a[i];

        for (int i = 1; i <= q; i++)
        {
            cin >> n;
            ctt min(a[1] - 1, n) << ' ';
        }
        ctt endl;
    }

    return 0;
}
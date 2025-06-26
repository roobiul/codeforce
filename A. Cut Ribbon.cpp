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

    ll a, b, c, n;
    cin >> n >> a >> b >> c;
    ll ans = 0;
    for (ll x = 0; x <= 4000; x++)
    {
        for (ll y = 0; y <= 4000; y++)
        {
            ll zc = n - (x * a + y * b);
            if (zc < 0)
                break;
            double z = (zc / (double)c);
            if (z == (int)z)
                ans = max(ans, (int)z + y + x);
        }
    }
    ctt ans << endl;
    return 0;
}
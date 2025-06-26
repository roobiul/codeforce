#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
ll bigmod(ll b, ll p)
{
    if (p == 0)
        return 1;
    ll x = bigmod(b, p / 2) % mod;
    x = (x * x) % mod;
    if (p % 2 == 1)
        x = (x * b) % mod;
    return x;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = bigmod(a, b);
        cout << ans << endl;
    }
    return 0;
}
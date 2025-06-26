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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll ans = 0;
        if (c > min(a, b) && d > min(a, b) && c < max(a, b) && d < max(a, b))
            ans = 0;
        else if (c > min(a, b) && c < max(a, b) || d > min(a, b) && d < max(a, b))
            ans = 1;
        else
        {
            ans = 0;
        }

        if (ans)
            ctt "YES" << endl;
        else
            ctt "NO" << endl;
    }

    return 0;
}
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
        ll a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) % 2 == 1)
        {
            cout << "-1\n";
            continue;
        }
        ll ans = (a + b + c) / 2;
        ans = min(ans, a + b);
        cout << ans << '\n';
    }

    return 0;
}
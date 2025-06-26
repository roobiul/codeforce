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

solve()
{

    int x, y;
    cin >> x >> y;
    int ans = 0;
    ans = ans + y / 2;
    int b = y / 2;
    int i = b;
    while (i > 0)
    {
        x -= 7;
        i--;
    }
    x = max(0, x);
    if (y % 2 == 1)
    {
        x -= 11;
        ans++;
    }
    x = max(0, x);
    ans += x / 15;
    x -= 15 * (x / 15);
    if (x > 0)
    {
        ctt ans + 1 << endl;
    }
    else
        ctt ans << endl;
}
int main()
{
    Robiul;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
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

void solve()
{
    Robiul;
    ll t;
    cin >> t;
    while (t--)
    {
        ll c = 0, key = 0, ans = 0, n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;

        for (ll i = 0; i < n; i++)
        {
            for (ll j = c; j < m; j++)
            {
                if (s1[i] == s2[j])
                {
                    ans++, c = j + 1;
                    key = 1;
                    break;
                }
            }
            if (key == 0)
            {
                break;
            }
            key = 0;
        }

        ctt ans << endl;
    }
}

int main()
{

    solve();

    return 0;
}
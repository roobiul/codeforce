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

        string str;
        cin >> str;

        ll arr[256] = {0};

        for (ll i = 0; i < n; i++)
        {
            arr[str[i]]++;
        }

        ll ans = 0;

        for (ll i = 'A'; i <= 'G'; i++)
        {
            if (arr[i] < m)
                ans += (m - arr[i]);
        }

        cout << ans << endl;
    }

    return 0;
}
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
        ll n;
        cin >> n;
        ll arr1[n], arr2[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        ll deff = 0, ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr1[i - deff] > arr2[i])
            {
                deff++, ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
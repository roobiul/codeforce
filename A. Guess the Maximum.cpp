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
        ll arr[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll m[n - 1];

        for (ll i = 0; i < n - 1; i++)
        {

            m[i] = max(arr[i], arr[i + 1]);
        }

        ll mn = *min_element(m, m + n - 1);

        ctt mn - 1 << endl;
    }

    return 0;
}

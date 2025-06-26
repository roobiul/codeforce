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
    ll n;
    Robiul;
    ll m;
    cin >> n >> m;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll sum = 0, csum = 0;
    ll first = 0;

    for (ll i = 0; i < n; ++i)
    {
        if (csum + a[i] <= m)
            csum += a[i];

        else
        {
            while (csum + a[i] > m)
            {
                csum -= a[first];
                ++first;
            }
            csum += a[i];
        }
        if (csum > sum)
            sum = csum;
    }
    ctt sum << endl;
    return 0;
}
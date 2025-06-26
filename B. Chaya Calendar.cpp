// بسم الله الرحمن الرحيم
// محمد روبيول الإسلام
// roobiul~Githab

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
#define ctt cout <<

using namespace std;

void solll ma_x = arr[0];
for (ll i = 1; i < n; i++)
{
    if (arr[i] > ma_x)
    {
        ve()
        {
            ll n;
            cin >> n;
            ll arr[n];
            for (ll i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            ma_x = arr[i];
        }
        else
        {
            ll temp = arr[i];
            ll j = 2;
            while (temp <= ma_x)
            {
                temp = arr[i] * j;
                j++;
            }
            ma_x = temp;
        }
    }
    ctt ma_x << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
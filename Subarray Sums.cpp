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
    Robiul;
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0, i = 0, j = 0, cnt = 0;

    while (i < n)
    {
        sum += arr[i];

        while (sum >= x)
        {
            if (sum == x)
                cnt++;
            sum -= arr[j];
            j++;
        }
        i++;
    }

    ctt cnt;
    return 0;
}
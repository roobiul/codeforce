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
    ll a, k;
    cin >> a >> k;
    ll arr[a];
    for (ll i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    ll ans = 0;

    for (ll i = 0; i < a; i++)
    {
        if (arr[i] < 5)

            if (5 - arr[i] >= k)
                ans++;
    }
    if (ans >= 3)
        ctt ans / 3 << endl;
    else
        ctt 0 << endl;

    return 0;
}
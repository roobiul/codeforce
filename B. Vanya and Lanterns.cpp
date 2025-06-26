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
    ll n, l;
    cin >> n >> l;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    sort(arr, arr + n);

    ll d = 2 * max(arr[0], l - arr[n - 1]);
    for (ll i = 1; i < n; i++)
    {
        d = max(d, (arr[i] - arr[i - 1]));
    }
    ctt fixed << setprecision(9) << (double)d / 2;

    return 0;
}
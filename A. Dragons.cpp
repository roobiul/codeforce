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
    ll s, l, ans = 0;
    cin >> s >> l;
    pair<int, int> arr[1000];
    for (ll i = 0; i < l; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr + l);
    for (ll i = 0; i < l; i++)
    {
        if (s <= arr[i].first)
        {
            ans++;
            break;
        }

        else
        {
            s = s + arr[i].second;
        }
    }

    if (ans > 0)
        ctt "NO" << endl;
    else
        ctt "YES" << endl;

    return 0;
}
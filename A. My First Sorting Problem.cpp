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

        ll x, y;
        cin >> x >> y;
        ll mn = min(x, y);
        ll mx = max(x, y);
        ctt mn << " " << mx << endl;
    }

    return 0;
}
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
        ll a, b;
        cin >> a >> b;
        for (ll bit = 0; bit <= 30; bit++)
        {
            if (((a >> bit) & 1) != ((b >> bit) & 1))
            {
                cout << (1ll << bit) << endl;
                break;
            }
        }
    }
    return 0;
}
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
    while (t >= 0)
    {
        ll x, y;
        cin >> x >> y;
        if (x < y)
            ctt x << " " << y << endl;
        else
            ctt y << " " << x << endl;
        t--;
    }

    return 0;
}
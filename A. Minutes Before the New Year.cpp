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

    ll h, m, t, day, time;
    cin >> t;
    while (t--)
    {
        time = 0;
        cin >> h >> m;
        day = 24 * 60;
        time = h * 60 + m;
        ctt day - time << endl;
    }
    return 0;
}

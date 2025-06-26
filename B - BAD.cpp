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

    int n, cw = 0, pt = 0;
    cin >> n;

    while (n--)
    {
        int t, v;
        cin >> t >> v;
        cw = max(0, cw - (t - pt)) + v;
        pt = t;
    }

    ctt cw << endl;

    return 0;
}
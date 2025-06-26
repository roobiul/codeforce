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
    ll n, a, b, m;
    cin >> n >> m >> a >> b;

    if (m * a <= b)
    {
        ctt n *a << endl;
    }
    else
    {
        ctt(n / m) * b + min((n % m) * a, b) << endl;
    }

    return 0;
}
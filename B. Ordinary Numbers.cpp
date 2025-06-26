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

int ordNum(ll n)
{
    int count = 0;
    for (ll i = 1; i <= 9; i++)
    {
        if (i > n)
            break;
        ll j = i;
        while (j <= n)
        {
            count++;
            j = j * 10 + i;
        }
    }
    return count;
}

int main()
{
    Robiul;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n < 9)
            ctt n << endl;
        else
            ctt ordNum(n) << endl;
    }

    return 0;
}
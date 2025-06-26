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
        ll n;
        cin >> n;
        string b;
        cin >> b;
        set<char> s(b.begin(), b.end());
        string r(s.begin(), s.end());
        string a;
        for (char c : b)
        {
            a += r[r.size() - 1 - distance(r.begin(), find(r.begin(), r.end(), c))];
        }
        ctt a << endl;
    }
    return 0;
}
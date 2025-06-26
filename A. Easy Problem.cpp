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
    ll n, a, b;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == 'p')
                s[i] = 'q';
            else if (s[i] == 'q')
                s[i] = 'p';
        }
        cout << s << endl;
    }

    return 0;
}
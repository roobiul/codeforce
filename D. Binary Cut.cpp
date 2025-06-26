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
        string s;
        cin >> s;
        ll n = s.length(), cnt = 1, x = 0;
        string s1;
        s1 = s;
        sort(s1.begin(), s1.end());
        if (s == s1)
            ctt cnt << endl;
        else
        {
            cnt = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] != s[i + 1])
                {
                    // if(s[i]=='1')x=1;

                    cnt++;
                }
            }
            if (cnt == 1)
                cnt++;
            ctt cnt << endl;
        }
    }

    return 0;
}
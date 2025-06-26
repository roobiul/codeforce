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

    ll n;
    string str;

    while (cin >> n >> str)
    {
        int up = 0, down = 0, coin = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == 'U')
                up++;
            else
                down++;

            if (up == down && str[i] == str[i + 1])
                coin++;
        }

        ctt coin << endl;
    }

    return 0;
}
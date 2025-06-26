// بسم الله الرحمن الرحيم
// محمد روبيول الإسلام
// roobiul~Githab

#include <iostream>
// #include<string>
// #include<bits/stdc++.h>
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
        int x;
        cin >> x;

        vector<int> v(32);

        for (int i = 29; i >= 0; i--)
        {
            v[i] = (x >= (1 << i));
            x %= (1 << i);
        }

        for (int i = 0, j; i < 32;)
        {

            if (!v[i])
            {
                i++;
                continue;
            }

            j = i + 1;
            while (v[j])
            {
                v[j] = 0;
                j++;
            }

            if (j > i + 1)
            {
                v[j] = 1;
                v[i] = -1;
            }

            i = j;
        }

        ctt 32 << "\n";
        for (auto e : v)
            ctt e << " ";
        ctt "\n";
    }

    return 0;
}
// بسم الله الرحمن الرحيم
// محمد روبيول الإسلام
// roobiul~Githab

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
#include <vector>
#define ctt cout <<
#define Robiul                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(101, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x]++;
        }
        int sum = 0;
        for (auto &s : a)
            sum += s / 3;
        ctt sum << "\n";
    }

    return 0;
}
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

const int N = 2e5 + 20;
int n, a[N];

int32_t main()
{
    Robiul;

    int t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int mx = 0, sum = 0, ans = 0;
        ;

        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i]);
            sum += a[i];

            if (2 * mx == sum)
                ans++;
        }

        cout << ans << '\n';
    }
}
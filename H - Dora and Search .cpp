#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l = 0, r = n - 1;
        int mn = 1, mx = n;
        while (l <= r)
        {
            if ((l + r) / 2 <= mn)
            {
                mn++;
            }
            else if ((l + r) / 2 >= mx)
            {
                mx--;
            }
            else if ((l + r) / 2 == mn)
            {
                r--;
            }
            else if ((l + r) / 2 == mx)
            {
                l++;
            }
            else
            {
                break;
            }
        }
        if (l == r)
        {
            cout << l + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

int main()
{
    int q = 1;
    cin >> q;
    while (q--)
    {
        solve();
    }
    return 0;
}

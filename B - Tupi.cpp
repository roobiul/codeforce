#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k, i;
    cin >> n >> k;
    ll a[n];
    cin >> a[0];
    for (i = 1; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i - 1] + a[i];
    }
    ll c = 0, s;
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            s = k;
            if (binary_search(a, a + n, s))
                c++;
        }
        else
        {
            s = a[i - 1];
            s = temp + k;
            if (binary_search(a, a + n, s))
                c++;
        }
    }
    cout << c << endl;
    return 0;
}
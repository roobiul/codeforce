#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define ctt cout <<
#define Robiul                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#include <vector>
using namespace std;

int solve()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back({temp, i});
    }
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = v[i].first + v[j].first;
        if (temp == x)
        {
            cout << v[i].second + 1 << " " << v[j].second + 1 << endl;
            return 0;
        }
        if (temp < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}

int main()
{
    Robiul;

    solve();

    return 0;
}
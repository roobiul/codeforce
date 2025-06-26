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
        ll m, n;
        cin >> m >> n;
        vector<string> grid(m);

        for (int i = 0; i < m; i++)
        {
            cin >> grid[i];
        }

        int sumRow = 0, sumCol = 0, count = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '#')
                {
                    sumRow += i;
                    sumCol += j;
                    count++;
                }
            }
        }

        if (count > 0)
        {
            int cRow = sumRow / count;
            int centerCol = sumCol / count;
            ctt cRow + 1 << " " << centerCol + 1 << endl;
        }
    }

    return 0;
}
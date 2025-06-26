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

const int MAX = 10e4 + 7;
const int MOD = 10e9;

vector<int> binary_decimals;

bool ok(int n)
{
    if (n == 1)
    {
        return true;
    }
    bool ans = false;
    for (int i : binary_decimals)
    {
        if (n % i == 0)
        {
            ans |= ok(n / i);
        }
    }
    return ans;
}

void solve()
{

    int n;
    cin >> n;
    ctt(ok(n) ? "YES\n" : "NO\n");
}

int main()
{
    Robiul;
    for (int i = 2; i < MAX; i++)
    {
        int curr = i;
        bool bad = false;
        while (curr)
        {
            if (curr % 10 > 1)
            {
                bad = true;
                break;
            }
            curr /= 10;
        }
        if (!bad)
        {
            binary_decimals.push_back(i);
        }
    }
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
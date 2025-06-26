// بسم الله الرحمن الرحيم
// محمد روبيول الإسلام
// roobiul~Githab

#include <bits/stdc++.h>

#define ll long long int
#define ctt cout <<
#define Robiul                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int h = 4 * 60;

    int sum = 0;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * 5;
        if (sum + k <= h)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
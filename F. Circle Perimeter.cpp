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

#include <cmath>

using namespace std;

// Function to compute Euclidean distance
double euclideanDistance(int x, int y)
{
    return sqrt(x * x + y * y);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        int r;
        cin >> r;

        int count = 0;
        for (int x = 0; x <= r; ++x)
        {
            int y_max = sqrt(r * r - x * x);
            count += 2 * (y_max + 1);
        }
        count *= 4;
        cout << count << endl;
    }

    return 0;
}
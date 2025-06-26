// بسم الله الرحمن الرحيم
// محمد روبيول الإسلام
// roobiul~Githab

// #include <iostream>
// #include <string>
#include <bits/stdc++.h>
// #include <vector>
#define ll long long int
#define ctt cout <<
#define Robiul                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

int mod(int a, int b, int c)
{
    if (b == 0)
        return 1;

    if (b % 2 == 0)
    {
        int x = mod(a, b / 2, c);
        return (x * x) % c;
    }
    else
    {
        return (a % c * mod(a, b - 1, c)) % c;
    }
}

int main()
{
    ll B, P, M;
    Robiul;
    while (cin >> B >> P >> M)
    {

        int ans = mod(B, P, M);

        ctt ans << endl;
    }
}

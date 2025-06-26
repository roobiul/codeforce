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
    ll A, B, C;
    cin >> A >> B >> C;

    if (A % C == 0)
    {
        ctt A << endl;
        return 0;
    }

    ll d = C - A % C;
    if (A + d <= B)
        ctt A + d << endl;
    else
        ctt -1 << endl;

    return 0;
}
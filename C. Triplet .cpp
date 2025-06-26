// بسم الله الرحمن الرحيم
// محمد روبيول الإسلام
// roobiul~Githab

#include <iostream>
#include <string>
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

    ll N;
    cin >> N;
    ll arr[N];

    for (ll i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    ll sum = 0;
    ll sm = 0;
    for (sm = 0; sm < N; sm++)
    {
        sum = 0;
        sum = arr[sm] + arr[sm + 1] + arr[sm + 2];
        if (sum > 0)
        {
            sum = 0;
            sum = arr[sm] + arr[sm - 1] + arr[0];
        }
    }
    if (sum == 0)
    {
        ctt "YES" << endl;
    }
    else
        ctt "NO" << endl;
    return 0;
}
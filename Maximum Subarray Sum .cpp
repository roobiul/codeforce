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

ll maxSUMfn(ll *arr, ll N)
{

    ll sum = 0, max_sum = -1e9;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
        max_sum = max(max_sum, sum);
        if (sum < 0)
            sum = 0;
    }
    return max_sum;
}

int main()
{
    Robiul;

    ll N;
    cin >> N;

    ll arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    cout << maxSUMfn(arr, N) << endl;
}

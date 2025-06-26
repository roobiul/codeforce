// بسم الله الرحمن الرحيم
// محمد روبيول الإسلام
// roobiul~Githab

// #include <iostream>
// #include <string>
#include <bits/stdc++.h>
// #include <vector>
#define ll long long
#define ctt cout <<
#define Robiul                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

int main()
{

    Robiul;
    ll N;
    cin >> N;

    ll arr[N];
    for (ll i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int minV = *std::min_element(arr, arr + N);
    int maxV = *std::max_element(arr, arr + N);

    int minInd = -1, manInd = -1;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == minV)
        {
            minInd = i;
        }
        if (arr[i] == maxV)
        {
            manInd = i;
        }
    }

    int sublen = abs(manInd - minInd) + 1;
    ctt sublen << endl;

    return 0;
}

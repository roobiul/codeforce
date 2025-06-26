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

int main()
{

    ll a;
    cin >> a;
    ll arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    int se = 0;
    int da = 0;
    bool s = false;
    int l = 0, r = a - 1;
    while (l <= r)
    {
        if (s)
        {
            if (arr[l] > arr[r])
            {
                da += arr[l];
                l++;
            }
            else
            {
                da += arr[r];
                r--;
            }
            s = !s;
        }
        else
        {
            if (arr[l] > arr[r])
            {
                se += arr[l];
                l++;
            }
            else
            {
                se += arr[r];
                r--;
            }
            s = !s;
        }
    }
    cout << se << " " << da << endl;

    return 0;
}
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
bool can_be_sorted_by_rotation(const vector<int> &arr)
{
    int n = arr.size();
    vector<int> double_arr(arr.begin(), arr.end());
    double_arr.insert(double_arr.end(), arr.begin(), arr.end());

    for (int i = 0; i < n; ++i)
    {
        vector<int> subarray(double_arr.begin() + i, double_arr.begin() + i + n);
        if (is_sorted(subarray.begin(), subarray.end()))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> arr(n);

        for (ll i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        if (can_be_sorted_by_rotation(arr))
        {
            ctt "Yes" << endl;
        }
        else
        {
            ctt "No" << endl;
        }
    }

    return 0;
}
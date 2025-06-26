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
    Robiul;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans;
        int power = 1;
        while (n > 0)
        {
            if (n % 10 != 0)
            {
                ans.push_back((n % 10) * power);
            }
            n /= 10;
            power *= 10;
        }
        reverse(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for (auto number : ans)
            cout << number << " ";
        cout << endl;
    }
    return 0;
}
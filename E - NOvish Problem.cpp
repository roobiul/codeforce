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

int main()
{
    long long n, x;
    std::cin >> n >> x;

    long long low = 1, high = n;
    int count = 0;

    while (low < high)
    {
        long long mid = (low + high) / 2;
        count++;

        if (x > mid)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    std::cout << count;
    return 0;
}
// بسم الله الرحمن الرحيم
// محمد روبيول الإسلام
// roobiul~Githab

#include <vector>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
#define ctt cout <<
#define Robiul                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#include <algorithm>
#include <sstream>
using namespace std;

struct Date
{
    int day, month, year;
};

bool operator<(const Date &a, const Date &b)
{
    if (a.year != b.year)
        return a.year < b.year;
    if (a.month != b.month)
        return a.month < b.month;
    return a.day < b.day;
}

int main()
{
    Robiul;
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int N;
        cin >> N;

        vector<Date> dates(N);
        for (int i = 0; i < N; i++)
        {
            string dateStr;
            cin >> dateStr;

            istringstream iss(dateStr);
            iss >> dates[i].day;
            iss.ignore(1, '/');
            iss >> dates[i].month;
            iss.ignore(1, '/');
            iss >> dates[i].year;
        }

        sort(dates.begin(), dates.end());

        cout << "Case #" << t << ":\n";
        for (const auto &date : dates)
        {
            if (date.day < 10)
            {
                cout << "0";
            }
            ctt date.day << "/";
            if (date.month < 10)
            {
                cout << "0";
            }
            ctt date.month << "/" << date.year << "\n";
        }
    }

    return 0;
}
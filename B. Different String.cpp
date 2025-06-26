// بسم الله الرحمن الرحيم
// محمد روبيول الإسلام
// roobiul~Githab

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        string inputString;
        cin >> inputString;

        bool hasDifference = false;
        for (size_t i = 0; i < inputString.length() - 1; ++i)
        {
            if (inputString[i] != inputString[i + 1])
            {
                hasDifference = true;
                break;
            }
        }

        if (hasDifference)
        {
            next_permutation(inputString.begin(), inputString.end());
            cout << "YES" << endl;
            cout << inputString << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
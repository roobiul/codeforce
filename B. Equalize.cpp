#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int maxFrequency = 0;
        int currentFrequency = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] == a[i - 1]) {
                ++currentFrequency;
            } else {
                maxFrequency = max(maxFrequency, currentFrequency);
                currentFrequency = 1;
            }
        }
        maxFrequency = max(maxFrequency, currentFrequency);

        cout << maxFrequency << endl;
    }

    return 0;
}

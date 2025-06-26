//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        string s;
        cin >> s;

        int mod = 1;
        for (int i = 0; i < n; ++i) {
            mod = (mod * a[i]) % m;
        }

        for (int i = 0; i < n; ++i) {
            cout << mod << " ";
            if (s[i] == 'L') {
                a.erase(a.begin());
            } else {
                a.pop_back();
            }
            if (!a.empty()) {
                mod = 1;
                for (int j = 0; j < a.size(); ++j) {
                    mod = (mod * a[j]) % m;
                }
            } else {
                break;
            }
        }
        cout << endl;
    }

    return 0;
}

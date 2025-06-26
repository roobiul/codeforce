//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<vector>
#define ll long long int
#define ctt cout<<
#define Robiul ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
using namespace std;
 
void solve() {
    ll n; 
    cin >> n;
    vector<int> arr(n);

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    ll i = 0, j = n - 1;
    while (i < n - 1 && arr[i] == arr[i + 1]) {
        i++;
    } 
    while (j >= 1 && arr[j] == arr[j - 1]) {
        j--;
    }

    ll result;
    if (arr[0] == arr[n - 1]) {
        result = max(j - i - 1, 0LL);
    } else {
        result = max(min(n - i - 1, j), 0LL);
    }

    ctt result << endl;
}
 
int main() {
    Robiul;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
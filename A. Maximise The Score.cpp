//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab

#include<vector>
#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
#define ctt cout<<
 
using namespace std;


solve(){
    ll n;
    cin>> n;
    vector<int> a(2 * n);

        for (int i = 0; i < 2 * n; i++) {
            cin >>a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        long long int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += min(a[2 * i], a[2 * i + 1]);
        }

        cout << ans << endl;
}
 
int main () {
 
ll t;
cin>>t;
while (t--)
{
   solve();
}
 
 
return 0;
}
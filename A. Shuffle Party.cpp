//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
#define ctt cout<<
#define Robiul ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


 
using namespace std;

solve (ll num)
{
    num=(int )log2(num);
    num=(int )pow(2,num);
    ctt num << endl;
} 
int main () {
    cout<< setprecision(10)<<fixed;
    Robiul;
    ll t;
    cin >> t;

    while (t--) {
        ll n;Robiul;
        cin >> n;
        solve(n);
        
    }

    return 0;
}
 
 

//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
#define ctt cout<<
 
using namespace std;

solve(){
    ll n;cin >>n;

        for (ll i = 1; i <=  n / 2; i++) {
            ctt n + 1 - i << " " << i << " ";
        }

        if (n % 2 != 0) {
            ctt (n + 1) / 2;
        }

        ctt endl;
}
 
int main () {
 
ll t;
cin >> t;
while (t--)
{
   solve();
}
 
 
return 0;
}
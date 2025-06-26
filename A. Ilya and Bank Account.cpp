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

void solve(ll n)
{
    Robiul;
    ll ans=n;
    if (n/10>ans) ans=n/10;
    if (n%10 + (n/100)*10 > ans) ans = n%10 + (n/100)*10;
    ctt ans<<endl;
}
 
int main () {
    Robiul;
    ll n; cin >> n;
    if (n>0) ctt n<<endl;

    else 
    {
        solve(n);
    }
 
return 0;
}
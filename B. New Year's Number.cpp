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
 
int main () {
    Robiul;
ll t; cin >> t;
while (t--)
{
    ll n; cin >> n;
    ll dev=n/2020;
    ll rem=n%2020;
    if (dev>=rem) ctt "YES"<<endl;
    else ctt "NO"<<endl;
}
 
 
return 0;
}
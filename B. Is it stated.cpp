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
 
ll t; cin >> t;
while (t--)
{
    string s; cin >> s;
    ll n=s.length();
    ll cnt=0;
    for (ll i=0; i<n; i++)
    {
        if (s[i]=='i'&&s[i+1]=='t') cnt=1;
    }
    if (cnt) ctt "YES"<<endl;
    else ctt "NO"<<endl;
}
 
 
return 0;
}
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


    ll n,count =0; cin >> n;
    string s;
    cin >> s;
    for (ll i=0; i<n; i++)
    {
        if (s[i]=='@') count++;
        if (s[i]=='*'&& s[i+1]=='*') break;
    }
    ctt count<< endl;
}
 
int main () {
 
ll t; cin>> t;
while (t--)
{
   solve();
}
 
 
return 0;
}
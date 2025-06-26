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
        ll a,b,sum=0;Robiul;
        cin >>a>>b;
        sum=a+b;
        if (sum%2==0)
        ctt "Bob"<<endl;
        else 
        ctt "Alice"<<endl;
    }
 
return 0;
}
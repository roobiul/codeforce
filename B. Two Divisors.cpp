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
ll t; cin>> t;
while (t--)
{
    ll a,b; cin >> a>>b;
    if (b%a==0) ctt  b*b/a<<endl;
    else ctt a*b/__gcd(a,b)<<endl;
}
 
 
return 0;
}
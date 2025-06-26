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
 
 ll t; cin >> t;ll suma=0,sumc=0;
    while (t--)
    {
        ll a,b,c;
        cin >> a>> b >> c;
        suma+=a;
        sumc+=c;

       
    }
     if (suma==0 && sumc==0)
     ctt "YES"<<endl;
     else
     ctt "NO"<<endl;
 
return 0;
}
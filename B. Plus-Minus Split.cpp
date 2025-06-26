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
 
    ll t; Robiul; cin >> t;
    while (t--)
    {
        ll n,plus=0,subt=0; cin >>n;
        string s;Robiul;
        cin >> s;

        for(ll i =0;  i<n; i++)
        {
            if (s[i]=='-') subt++;
            if (s[i]=='+') plus++;

        }
        ll sum=0;
        if (plus>subt)
         sum=plus -subt;
         else
         sum= subt-plus;
        
        ctt sum<<endl;

    }
    
 
return 0;
}
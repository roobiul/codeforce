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
        ll n,x ;      cin>>n>>x; ll ans=0; 
        
        for(ll i=1; i<=n;  i++) if(x%i==0 && x/i<=n)  ans++;
        
        ctt ans<<endl; 
 
return 0;
}
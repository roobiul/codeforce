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
 
    ll n,ans=0; cin >> n;
    while (n!=0){
    if (n%2==1) ans++;
         n= n/2;
    
    
    }ctt ans<<endl;
 
return 0;
}8
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
    
    ll a,b; cin >>a>>b; ll x=a;
    while (a>=b)
    {
        x+=a/b; a= (a/b)+ (a%b);
    }
    ctt x <<endl;
 
return 0;
}
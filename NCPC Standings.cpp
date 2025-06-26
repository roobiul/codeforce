

#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
#define ctt cout<<
 
using namespace std;
 
int main () {
 
 ll t; cin >> t;
 while (t--)
 {
    ll p,s,r;
    cin >> p>>s>>r;
    
    ll expected=165-(s*16.5);

        if ((p==s&& r==1 )|| s==0)
    ctt "Yes"<< endl;
    else if (expected>=r)
    ctt "Yes"<<endl;
    else 
    ctt "No"<<endl;


  }
 

return 0;
}
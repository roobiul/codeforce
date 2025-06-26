//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
#define ctt cout<<
 
using namespace std;
 
int main () {
 
 ll t; cin >>t;
    while (t--)
    {
        ll n,ans=0;
        cin >>n;
        string s1="Timur";
        string s;
        cin >>s;
      
        sort(s1.begin(),s1.end());
        sort(s.begin(),s.end());

      if (s==s1)
      cout <<"YES"<<endl;
      else
      cout <<"NO"<<endl;
      



    }
    
 
return 0;
}
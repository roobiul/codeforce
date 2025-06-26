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
 
 string s1,s2,s3,s4; cin >> s1>> s2>>s3;
 ll sum = s1.length()+s2.length();
 ll n=s3.length();
 if (sum ==n)
 {
    s4=s1+s2;
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());
    if (s3==s4) ctt "YES"<<endl;
    else ctt "NO"<<endl;
    
 }
 else ctt "NO"<<endl;
 
return 0;
}
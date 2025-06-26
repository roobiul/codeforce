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
 
  ll t; cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    if (s[0]=='c'&& s[1]=='b'&& s[2]=='a')    ctt "YES" <<endl;

   else  if (s[0]=='c'|| s[2]=='a')
    ctt "NO"<< endl;
    else
    ctt "YES" <<endl;
  }
   
 
return 0;
}
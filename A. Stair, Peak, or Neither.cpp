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
ll  t; cin >> t;
while (t--)
{
   ll a , b ,c; cin >> a>> b>> c;
   if (a<b && b<c) ctt "STAIR" <<endl;
   else if (a<b && b>c) ctt "PEAK" <<endl;
   else   ctt "NONE" <<endl;
}

 
return 0;
}
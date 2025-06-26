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
 
ll t;Robiul; cin >> t;
        while (t--)
        {
            string a,b,c;Robiul;
            cin >> a>>b>>c;
            if (a==b) ctt c<<endl;
            if (a==c) ctt b<<endl;
            if (c==b) ctt a<<endl;
        }
        
 
return 0;
}
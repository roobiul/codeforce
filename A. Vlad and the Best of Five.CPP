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
 
ll t;
cin >> t;
while (t--)
{
    ll counta=0,countb=0;
    string s;
    cin >> s;
    for (ll i =0; i<5; i++)
    {
        if (s[i]=='A') counta++;
        if (s[i]=='B') countb++;
    }
    if (counta >countb)
    
    ctt "A"<< endl;
    else
    ctt "B"<< endl;

}
 
 
return 0;
}
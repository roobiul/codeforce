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
 
    ll t;Robiul; cin>> t;
    while (t--)
    {
        Robiul;
        ll n,count=0;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        for (ll i=0; i<n; i++)
        {
            if (s[i]!=s[i+1])
            count++;
        }

        ctt n+count<<endl;
    }
    
return 0;
}
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
    ll t;
    cin >> t;

    while (t--) {
        ll n,c=0,cc=0;
        cin >> n;
        string s;
        cin >> s;

        for (ll i=0; i<n ; i++)
        {
            if ((s[i]=='m'&& s[i+1]=='a'&&s[i+2]=='p')|| ( s[i]=='p'&& s[i+1]=='i' && s[i+2]=='e')) c++;
            if ( s[i]=='m'&&s[i+1]=='a'&& s[i+2]=='p' && s[i+3]=='i'&& s[i+4]=='e') cc++;
        }
        ctt c-cc<<endl;
    }


return 0;
}
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
    
    ll t;cin >> t;
    while(t--)
    {
        ll n=8;
        
        for (int j=0; j<n; j++){
            string s; cin >> s;
        for (int i=0; i<n; ++i)
        {
            if (s[i] == '.')
            {
                continue;
            }
            if (s[i] != '.')
            {
                cout << s[i];
            }
        }
        }
        cout << endl;
    }
 
 
return 0;
}
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
    t*=3;
    while (t--)
    {
        string s1;Robiul;
        cin >>s1;
        sort(s1.begin(),s1.end());
        
        
            if (s1[0]=='?')
            {
                if (s1[1]=='A' && s1[2]=='B') ctt "C"<< endl;
                if (s1[1]=='A' && s1[2]=='C') ctt "B"<< endl;
                if (s1[1]=='B' && s1[2]=='C') ctt "A"<< endl;
                
            }
        

        

    }
    
 
return 0;
}

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
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1;
        s2 = s1;
        reverse(s1.begin(),s1.end());
        

        if(s1>=s2)
            cout<<s2<<endl;
        else
            cout<<s1+s2<<endl;


    }



return 0;
}
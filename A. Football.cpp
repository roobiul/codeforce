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
    string s;
    cin>> s;
    ll n=s.length(); ll cnt1=1;
   for(int i=1; i<=n; i++){
        if(s[i] == s[i-1]){
            cnt1++;
            if(cnt1==7){
                cout<<"YES"<<endl;
                return 0;
            }
        }else{
            cnt1=1;
        }
        
    }
    cout<<"NO"<<endl;

 
return 0;
}
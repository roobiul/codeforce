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
 
int main(){
    Robiul;
    ll t;
    cin>>t;
    while(t--){
        
        ll n;Robiul;
        cin>>n;
        string s;
        cin>>s;
        set<string>set1;
        for(ll i=0;i<n-1;i++){
            string add = "";
            add+=s[i];
            add+=s[i+1];
            set1.insert(add);
        }
        
       ctt set1.size()<<endl;
    }
}

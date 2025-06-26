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
 

int main() {
    Robiul;
    string s;
	ll flag=1;
	cin>>s;
	for(ll i=0;i<s.size();i++){
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
	        if(!flag){
	            ctt " ";
	        }
	        continue;
	    }else {
	        flag=0;
	        ctt s[i];
	    }
	}
return 0;
}
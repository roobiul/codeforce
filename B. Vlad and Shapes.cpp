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
 
    ll t;cin>> t;
    while (t--)
    {
        
         ll n;cin>>n;

      bool check = false;


      for(int i=0;i<n;i++){

         string s;cin>>s;

         ll count = 0;

         for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
               count++;
            }
         }
         if(count==1)  check = true;
      }
      if(check)
         cout<<"TRIANGLE"<<endl;
      else
         cout<<"SQUARE"<<endl;
      

       
    }
    
 
return 0;
}
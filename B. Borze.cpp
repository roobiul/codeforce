#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
string s;
cin >> s;
 for (int i=0; i<s.size(); i++)
 {
    if (s[i]=='-' && s[i+1]=='.')
    {
        cout << "1";
        i=i+1;
    }
    else if (s[i]=='-'&& s[i+1]=='-')
    {
        /* code */ cout << "2";
       i=i+1;
    }
    else if (s[i]=='.')
    {
      
         cout << "0";
      
    }
    
    
 } 
 
return 0;
}
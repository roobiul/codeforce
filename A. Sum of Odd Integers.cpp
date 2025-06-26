#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
    long long int t,n,k,sum=0;
    cin >> t;
    while (t--)
    {
        cin>> n>>k;
            
        if(n>= k*k && (n&1)==(k&1)) 
        {
            cout <<"YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
        

       
    }
    
 
return 0;
}
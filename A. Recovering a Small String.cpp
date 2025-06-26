#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 //robiul
int main () {
 
int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=28){
            cout<<char(97)<<char(97)<<char((n-2)+96)<<endl;
        }
        else if(n>28&&n<=53){
            cout<<char(97)<<char(n-27+96)<<char(122)<<endl;
        }
        else if(n>=54)
            cout<<char(n-52+96)<<char(122)<<char(122)<<endl;
    }

 
return 0;
}
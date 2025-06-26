#include<iostream>
#include<string>
#include<bits/stdc++.h>
 //roobiul~Github
using namespace std;


int main() {
        long long int a,b,t,Check,test_a,test_b;
        cin>>t;
        while(t--)
        {
            Check=0;
            cin>>a>>b;
     
            if(a%2==0)
            {
               
                test_a = a/2;
                test_b = 2*b;
                if(test_a!=b && test_b!=a)
                    Check++;
                
            }
            if(b%2==0)
            {
               
                test_a = 2*a;
                test_b = b/2;
                if(test_a!=b && test_b!=a)
                    Check++;
                
            }
            if(Check==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    
    
 
return 0;
}
#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () 
{
 
        int a,b,c,t;
        cin >> t;
        while (t--)
        {
            cin >>a>>b>>c;

            if ((a+b)==c)
            {
                cout << "+"<<endl;
            }
            else
            {
                cout << "-"<<endl;
            }
        }
        
 
        return 0;
}
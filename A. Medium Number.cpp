#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
    int t;
    cin >> t;

    while (t--)
    {
        int a,b,c;
        cin >>a>>b>>c;
        if ((b < a && a < c) || (c < a && a < b))
        {
            cout << a<<endl;
        }
       else if ((a < b && b < c) || (c < b && b < a))
        {
            cout << b<<endl;
        }
        else 
        {
            cout << c<<endl;
        }
    }
    
 
return 0;
}
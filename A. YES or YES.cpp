#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
int t;
cin >> t;

string s;

while(t--)
{
    cin >>s;
    if (s=="YES" || s=="Yes"|| s=="YEs" || s=="YeS"|| s=="yes"|| s=="yES"|| s=="yEs"||s=="yeS")
    {
        cout << "YES"<<endl;
    }
    else{
        cout << "NO" << endl;
    }
}
 
return 0;
}
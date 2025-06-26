#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;

bool isSquareString(string s) {
    int n = s.length();
    if (n % 2 != 0) 
        return false;

    
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[i + n / 2])
            return false;
    }

    return true;
}
 
int main () {
 
    int t;
    cin >>t;
       while (t--) {
        string s;
        cin>>s;

        if (isSquareString(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
        
    
    
 
return 0;
}



#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
    int t,msum=0,csum=0;
    cin >> t;
     while (t--)
     {
        int m,c;
        cin >> m>>c;
       
     if (m>c)
     {
        msum++;
     }
    
     else if (c>m) 
     {
        csum ++;
     }
     }

     if (msum>csum)
     {
        cout << "Mishka"<< endl;
     }
     else if (msum==csum)
     {
        /* code */ cout << "Friendship is magic!^^"<< endl;
     }
     else 
     {
        cout << "Chris"<< endl;
     }
 
return 0;
}
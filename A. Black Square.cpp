#include<iostream>
#include<string>
#include<bits/stdc++.h>
 //roobiul
using namespace std;
 
int main () {
 
    int a1,a2,a3,a4,countA1=0,countA2=0,countA3=0,countA4=0;
    cin >> a1>>a2>>a3>>a4;
      string s;
     cin >> s;
     for (int i=0; i<=s.length(); i++)
     {
        if (s[i]=='1')
        {
            countA1++;
        }
        else if (s[i]=='2')
        {
            countA2++;
        }
        else if (s[i]=='3')
        {
           countA3++;
        }
        else if (s[i]=='4')
        {
            countA4++;
        }
        
     }

     int sum=(countA1*a1)+(countA2*a2)+(countA3*a3)+(countA4*a4);

     cout << sum<< endl;
 
return 0;
}
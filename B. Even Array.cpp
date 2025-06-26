#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
    int t;
    cin >> t;
    while (t--)
    {
         int n,odd=0,even=0;
         cin >> n;
         int num[n];
         for (int i=0; i<n; i++)
         {
            cin >> num[i];

            if (i%2!= num[i]%2)
            {
                if (num[i]%2)
                odd++;
                else 
                even ++;
            }
            
         }
         if (odd!=even)
         {
            cout << "-1"<< endl;
         }
         else 
         cout << odd<< endl;
         


    }
    
 
return 0;
}
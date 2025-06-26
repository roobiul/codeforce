#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
    long int t;
    cin >> t;
   
    string s;
    while (t--)
    {
        int n,count1 =0, count2 =0;
        cin >>n;
        string s;
        for (int i=0; i<n; i++)
        {
            cin>> s[i];
        }

        for (int j=0; j<n; j++)
        {
            if (s[j]=='W')
            count1++;
            else
            break;
        }
         for (int k=n-1; k>0; k--)
        {
            if (s[k]=='W')
            count2++;
            else
            break;
        }
        cout << n-(count1+count2) << endl;
    }

    
 
 
return 0;
}
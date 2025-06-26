#include<iostream>
#include<string>
#include<algorithm>
//#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
    int t;
    cin >> t;
   int num[t],ma=0,mi=101,maxi,mini;
   for (int i=0; i<t; i++)
    {
        cin >> num[i];
    if (num[i]>ma)
    {
        ma=num[i];
        maxi=i;
    }

     if (num[i]<=mi)
    {
        mi=num[i];
        mini=i;
    }
   
    }
    if (maxi>mini)
    {
        mini++;
    }
     cout << maxi+(t-1)-mini<< endl;
return 0;
}
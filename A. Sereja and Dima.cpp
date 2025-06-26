#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
    
 int t; 
 cin >>t;
    int arr1[t+1];
    int s=0,d=0;

    for (int i=0; i<t; i++)
    {
        cin >> arr1[i];
    }

    //int n = sizeof(arr1)/sizeof(arr1[0]);
    sort(arr1, arr1+t); 

    for (int i=0; i<t; i=i+2)
    {
        cout <<i << " ";
        s=s+i;
    }
    for (int i=1; i<t+1; i=i+2)
    {
      cout << i<<" ";
      d=d+i;
    }
 //cout << d<<" "<<s<<endl;
return 0;
}
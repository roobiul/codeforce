#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
    
    int a;
    cin>> a;
    int n1[a],n2[a],count=0;

    for (int i=0; i<a; i++)
    {
        cin >> n1[i];
        cin >> n2[i];
        
    }

    for (int i=0; i<a; i++)
    {
    for (int j=0; j<a; j++)
    {
        if (n1[i]==n2[j])
        count++;
    }
        
    }
    cout << count << endl;
 
 
return 0;
}
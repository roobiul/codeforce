#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
 int n;
 cin >> n;
 int police=0, crime=0;

 while (n--)
 {
    int x;
    cin >>x;
    if (x>0)
    {
        police+=x;
    }
    else
    {
        if (police<1)
        {
            ++crime;
        }
        else 
        {
            --police;
        }
    }
 }
 cout << crime <<endl;
 
 
return 0;
}
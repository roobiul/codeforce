#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
int n,k;
cin >> n>> k;

if (n<k)
{
    cout << n<<" ";
    cout << (k-n)/2;
}
else 
{
    cout << k <<" ";
    cout << (n-k)/2;
}
 


return 0;
}
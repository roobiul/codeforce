#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
int num;
cin >> num;

if ( num % 2 !=0)
{
    
    cout << 9 << " "<< num-9;
}
else if (num %2 ==0)
{
    cout << 4 << " "<< num-4;
    
}
 
return 0;
}
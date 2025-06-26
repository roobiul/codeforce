#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
    long long int n,m,a;
    cin>> n>>m>>a;
    long long int lent,wigt;
    lent = n/a;
    wigt=m/a;

    if (n%a!=0)
    {
        lent++;
    } 
    if (m%a!=0)
    {
        wigt++;
    } 

    cout << lent*wigt << endl;


return 0;
}
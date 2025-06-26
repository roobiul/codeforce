#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
    int t,sum1=0,sum2=0;
    string a;
    cin >>t;

    while(t--)
    {
        cin >> a;

        sum1 =a[0]+a[1]+a[2];
        sum2 =a[3]+a[4]+a[5];

        if (sum1==sum2)
        {
            cout << "YES"<< endl;
        }
        else
        {
            cout << "NO"<< endl;

        }

    }

    //cout << a[0]<<" "<< sum2;


 
return 0;
}
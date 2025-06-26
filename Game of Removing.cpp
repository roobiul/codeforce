
#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
#define ctt cout<<
 
using namespace std;
 
int main () {

     ios_base::sync_with_stdio(false);    cin.tie(0); cout.tie(0);
int t; cin >>t;
    for (ll i = 1; i <=t; ++i)
    {
        ll n,count=0; cin >>n;
        ll a[n],b[n];


        for(ll j=0;j<n;j++)
        {
            cin >>a[j];
        }
        sort(a,a+n);


        for(ll j=0;j<n;j++) 
        {
            cin >>b[j];
        }
        sort(b,b+n);

        for (ll j =0; j<n;j++) 
        {
            if (a[j]==b[j]) count++;
        }
        cout << "Case "<<i<<": "<<n-count<<endl;


    }
 
return 0;
}
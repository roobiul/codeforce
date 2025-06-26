//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
#define ctt cout<<
#define Robiul ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
using namespace std;
 
int main () {
 Robiul;
 ll t; cin>> t;
    while (t--)
    {
        Robiul;
        ll n,k,ans=1; cin >> n>>k; ll arr;
        for (ll i=0; i<n; i++)
        {
            cin >> arr;
            ans*=arr;

        }

        if (2023%ans==0)
        {
            ctt "YES"<<endl;
            ctt 2023/ans <<" ";
            for (ll i=1; i<k; i++ )
            {
                ctt 1 << " ";
            }
            ctt endl;
        }
        else 
        ctt "NO" <<endl;
    }
 
 
return 0;
}
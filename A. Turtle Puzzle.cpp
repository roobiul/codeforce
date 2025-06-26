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
ll t;cin >>t;

    while (t--)
    {
        ll n;Robiul;
        cin >>n;
        ll arr[n+1], ans=0;
        for (ll i=0; i<n; i++)
        {
            cin >> arr[i];
            if (arr[i]<0)
            arr[i]=(arr[i]*(-1));
            ans+=arr[i];
        }
        /* code */ ctt ans<<endl;
    }
       
 
return 0;
}
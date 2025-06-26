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
  ll t; cin >>t;
 while (t--)
 {
    ll n; cin >> n;
    ll arr[n];
    for (ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort (arr, arr+n);
    ll ans=1;
    arr[0]++;

    for (ll j=0; j<n; j++)
    ans*=arr[j];
    ctt ans<<endl;
 }
 
 
return 0;
}
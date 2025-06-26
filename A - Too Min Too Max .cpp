//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
#define ctt cout<<abs(arr[n-1]-arr[0])+abs(arr[n-1]-arr[1])+abs(arr[1]-arr[n-2])+abs(arr[n-2]-arr[0])<<endl
#define Robiul ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 


using namespace std;
void solve ()
{   Robiul;
    ll n; cin >> n;
    ll arr[n];
    for(ll i=0; i<n; i++)    
    cin >> arr[i];

    sort(arr,arr+n);
    ctt;
    
}
 
int main () {
    ll t;Robiul; cin >>t;
    while (t--)
    {
        solve();
    }
    
 
 
 
return 0;
}
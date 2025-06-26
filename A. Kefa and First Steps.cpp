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
    ll n; cin >> n;
    ll arr[n];
    for (ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    ll k=1,ans=0;
    for (ll i=0; i<n; i++)
    {
        if (arr[i]>=arr[i-1]) k++;
        else ans=max(ans,k),k=1;


    }
    ans=max(ans,k);
    ctt ans<<endl;
 
 
return 0;
}

	
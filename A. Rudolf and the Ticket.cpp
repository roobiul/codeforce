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
    ll t; cin >> t;
    while (t--)
    {
        ll n,m,k; cin >> n>>m>>k;
        ll arr1[n], arr2[m],count=0;
        for (int i=0; i<n; i++)
        {
            cin >> arr1[i];
        }
        for (int i=0; i<m; i++)
        {
            cin >> arr2[i];
        }

        for (int i=0; i<n; i++)
        {
           for (int j=0; j<m; j++)
        {
            ll sum = arr1[i]+ arr2[j];
            if (sum <=k) count++;
        }
        }
        ctt count<< endl;
    }
    
 
return 0;
}
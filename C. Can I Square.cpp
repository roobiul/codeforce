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
 
ll t; cin >>t;
while (t--)
{
   
    ll n;cin >> n;
    ll arr[n],sum=0;
    for (ll i=0; i<n; i++)
{
    cin >> arr[i];
    sum +=arr[ i];

}

  ll   sq =sqrt(sum);
   if (sq*sq==sum)
   ctt "YES"<<endl;
   else
   ctt "NO"<<endl;

}
 
 
return 0;
}
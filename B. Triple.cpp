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
ll t;
cin  >> t;
    while (t--)
    {
       ll n,a,cnt=0,b; cin>> n;
       ll arr[n];
       for (ll i =0; i<n; i++)
       {
        cin >> arr[i];
        

       }
       sort (arr,arr+n);
       //reverse(arr,arr+n);
       a=-1;
       b=arr[0];
       for (ll i =0; i<n; i++)
       {
        if (arr[i]==arr[i+1]&& arr[i]==arr[i+2]){
        cnt++;b=arr[i];
        }

       }

       if (cnt !=0)
       ctt b<<endl;
       else 
       ctt a<<endl;
    }
    
 
return 0;
}
//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
 
using namespace std;


void solveProblem(){

    ll n;
    cin >>n;
    ll arr[n];
    for (ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << abs(arr[0]-arr[n-1])<<endl;

}
 
int main () {
    ll t;
 cin >>t;
    while (t--)
    {
       solveProblem();
    }
    
 
return 0;
}
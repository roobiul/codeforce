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
    ll n,i,sum=0,sum2=0,cnt=0; cin >>n;
    ll a[n];
    for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sum=sum/2;
        sort(a,a+n);
       
        for(i=n-1;i>=0;i--){
            sum2+=a[i];
            cnt++;
            if(sum2>sum)
                break;
        }
        ctt cnt<<endl;
 
return 0;
}
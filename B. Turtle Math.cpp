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
 
 solve()
 {
    ll t,i,n;
    ll a,b,c;
    Robiul;
    cin>>t;
    while(t--)
    {
        Robiul;
        cin>>n;
       ll a[n],sum=0,cnt=0;
 
        for (i = 0; i < n; ++i)
        {
            cin>>a[i];
            sum = sum + a[i];
        }
 
        if(sum%3==0) 
            cnt=0;
        else if(sum%3==2) 
            cnt=1;
        else
        {
            for (i = 0; i < n; ++i)
            {
                if( (sum-a[i])%3==0)
                {
                    cnt=1;
                    break;
                       }
                else
                    cnt=2;
            }
        }
 
      ctt cnt<<endl;
       
        }
 }
int main () {
 
    solve();
 
return 0;
}
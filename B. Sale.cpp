//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
#define ctt cout<<
 
using namespace std;

          
solve(){
    ll n,m;ios_base::sync_with_stdio(false);    cin.tie(0); cout.tie(0);
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin >>a[i];

    int money=0;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        
        if (m>0){
            if (a[i]<0)
            money+=(abs(a[i]));

            m--;
        }
        if (m==0) break;
    }
    ctt money<<endl; 


}
 
int main () {
 
   

        solve();
 
return 0;
}
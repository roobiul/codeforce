//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
 
 
using namespace std;
void calculate(){
 
    int x_max=INT_MIN, x_min=INT_MAX ,y_max=INT_MIN,y_min=INT_MAX;
    int i= 4;
    while ( i--)
    {
        int x,y;
        cin>>x>>y;
        x_max=max(x_max,x);
        x_min=min(x_min,x);
 
    }
    ll ans=(x_max-x_min)*(x_max-x_min);
    cout<<ans<<endl;
 
    
}
 
int main () {
 
int t;
cin>>t;
while(t--){
   calculate();
}
 
return 0;
}
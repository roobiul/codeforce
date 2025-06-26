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

solve(){
  ll n; cin>> n;
   if(n%2!=0)
   		ctt"NO"<<endl;
   else
    {
    	 ctt"YES"<<endl;
    	 for(ll i=0; i<n; i=i+2)
    	  {
    	  	 if(i%4==0)
    	  	  ctt"BB";
    	  	  else
    	  	  ctt"AA";
    	  	}
    	  	ctt endl;
    }
   
      

}

int main() {

    Robiul;
    ll t;
    cin >> t;
    
    while (t--) {
       solve();
    }
    return 0;
}

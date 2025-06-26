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
ll a,b,c; ll ans;
while(cin>>a>>b>>c)
	{
		ans=a+b+c;
		ans=max(ans,(a*b*c));
		ans=max(ans,(a+b)*c);
		ans=max(ans,a*(b+c));
		ans=max(ans,a+(b*c));
		ans=max(ans,(a*b)+c);
		cout<<ans<<endl;
	}
 
return 0;
}
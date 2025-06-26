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
ll t; cin >> t ;

while (t--)
{
    string s,sh,sm; cin >> s;
    ll hh=0;
    
    for (ll i=0; i<2; i++)
    {
        sh[i]=s[i];
    }
   

    hh =stoi(sh);
    
    if (hh>12)
    {
        hh=hh-12;
        if (hh<10)
        {
        ctt "0"<< hh<<":"<<s[3]<<s[4]<<" PM"<<endl;

        }
        else
        ctt hh<<":"<<s[3]<<s[4]<<" PM"<<endl;
    }
    else if (hh==0){
        ctt "12"<<":"<<s[3]<<s[4]<<" AM"<<endl;

    }
    else if (hh==12 )
    {
        ctt hh<<":"<<s[3]<<s[4]<<" PM"<<endl;

    }
    else
    ctt s<<" AM"<<endl;
    

}

 
return 0;
}
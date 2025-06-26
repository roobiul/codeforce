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
 
 string s,s1="hello"; cin >> s;
 ll n=s.length(); 
    if (n<5) {
        ctt "NO"<< endl;
        }

        else if (n>5)
        {    
            ll cnt=0;
            ll i,j,k,m,p;
            for (i=0; i<n; i++)
            {
                if (s[i]=='h')
                {
                    for(j=i; j<n; j++)
                    {
                        if (s[j]=='e')
                        {
                            for (k=j; k<n; k++)
                            {
                                if (s[k]=='l')
                                {
                                    for(m=k+1; m<n;m++)
                                    {
                                        if (s[m]=='l')
                                        {
                                            for (p=m; p<n;p++)
                                            if (s[p]=='o') cnt=1;
                                        }
                                    } 
                                }
                            }
                        }
                    }
                }
            }
            if (cnt) ctt "YES"<<endl;
            else
            ctt "NO"<<endl;
        }



    else {
        
    if (s==s1)  ctt "YES"<<endl;
    else ctt "NO"<<endl;
    
       }

 
//  if (cnt)
//  ctt "YES"<<endl;
//  else
//  ctt "NO"<<endl;
return 0;
}
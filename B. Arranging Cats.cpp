//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main () {
    int t; 
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        ll one=0,one2=0,extra_One=0,ans=0;
        for (int i=0; i<n; i++)
        {
            if (s1[i]=='1')
            one++;
            if (s2[i]=='1')
            one2++;
        
            if (s1[i]!=s2[i]&& s2[i]=='1')
            extra_One++;
        }
        ans=extra_One;
        
        if (one>one2)
        ans+= (one-one2);


        cout << ans << endl;
    }
    return 0;
}

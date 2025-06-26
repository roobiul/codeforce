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

int main() {
    Robiul;
    ll t;
    cin >> t;
    for (ll tt = 0; tt < t; tt++) {
        ll n;
        cin >> n;
        for (ll i = 0; i < 2*n; i++) {
            for (ll j = 0; j < 2*n; j++) {
                if ((i/2 + j/2) % 2 == 0) {
                    ctt "#";
                } else {
                    ctt ".";
                }
            }
            ctt "\n";
        }
    }
    return 0;
}
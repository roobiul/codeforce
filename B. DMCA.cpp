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
 



int digital_root(ll a) {
    while (a > 9) {
        ll sum = 0;
        while (a > 0) {
            sum += a % 10;
            a /= 10;
        }
        a = sum;
    }
    return a;
}

int main() {
    ll a;Robiul;
   cin >> a;
    ll root = digital_root(a);
    ctt root <<endl;
   

return 0;
}
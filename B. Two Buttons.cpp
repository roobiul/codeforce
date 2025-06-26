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

void solve(){
Robiul;
    ll n, m, cnt=0;
    cin >> n >> m;
    while (n != m)
    {
        if (m > n)
            if (m % 2 == 0) m /= 2, cnt++;
            else m++, cnt++;
        else if (n > m) m++, cnt++;
    }
    ctt cnt << endl;
}

int main()
{   solve();
    return 0;
}
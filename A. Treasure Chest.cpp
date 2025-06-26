#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
 //roobiul
using namespace std;

void solve()
{
    int x,y,k;
    cin >> x>>y>>k;
    if (x<y)
    {
        if (y-x<=k)
        {
            cout << y << endl;
            return;
        }
        else 
        {
            cout << (2*y-(x+k))<< endl;
            return;
        }
    }
    cout << x<< endl;
}
 
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin>> t;
    while (t--)
    {
        solve();
    }
    
 
 
return 0;
}
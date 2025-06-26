#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
int ans[3];
    cin >> ans[0] >> ans[1]>> ans[2];

    sort(ans,ans+3);


 cout <<ans[2]-ans[0]<< endl;
return 0;
}
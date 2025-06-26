#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
int n,k,ans=0,final=0,ab=0;
cin >> n >> k;
ans= 240-k;
for (int i=1; i<=n ; i++)
{
    ab+=5*i;
    if (ab <= ans)
    {
        final++;
    }

}
cout << final <<endl;
 
return 0;
}
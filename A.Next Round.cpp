#include<iostream>
#include <string>

using namespace std;

int main ()
{
  int x,k,i,a,ans=0;
cin>>x>>k;
int n[x];
for (i=0;i<x;i++)
    cin>>n[i];
    k =k-1;
    for (i=0;i<x;i++)
    if (n[i]>=n[k] && n[k]>0)
    ans++;
    
    cout <<ans<<endl;

    return 0;

}

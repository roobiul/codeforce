#include<iostream>
#include <string>

using namespace std;

int main ()
{
  int x,k,i,a[10000],ans=0;
cin>>x>>k;
//robiul
for (i=0;i<x;i++)
    cin>>a[i];
    
    for (i=0;i<x;i++){
    if (a[i]>=a[k-1] && a[i]>0)
    ans++;
    }
    cout <<ans<<endl;

    return 0;

}

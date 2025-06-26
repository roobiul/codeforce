#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
int t;
cin >> t; 
while (t--)
{
    int n,sum1=0,sum2=0;
    
    cin >>n;
    int a[n];
    for (int i=0; i<n; i++)
    {
         cin>> a[i] ;
    }
    if (n%2==0)
    {
        for (int i=0; i<n; i=i+2)
        {
        sum1=sum1+a[i];
        }
         for (int i=1; i<n; i=i+2)
        {
        sum2=sum2+a[i];
        }

    }
    if (sum1==sum2)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
        cout<<"S1 "<<sum1<<endl;
        cout<<"S2 "<<sum2<<endl;
        

}
 
 
return 0;
}
#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
int n,k,m,t;

cin >> t;
while(t--)
{
        int count1=0,count2=0;
        int a[m],b[n];
        cin>>n>>m>>k;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for (int i=0; i<m; i++)
        {
            cin >> b[i];
        }

        for (int i =0; i<n; i++)
        {
            if (a[i]<=k)
            {
                count1++;
            }
        }
         for (int i =0; i<m; i++)
        {
            if (b[i]<=k)
            {
                count2++;
            }
        }
        cout << <<endl;


} 
return 0;
}
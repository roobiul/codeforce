#include<iostream>
//#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
    int i,f,p,q,arr[200],count =0;

    cin >> f>> p;

    for (i=0; i<p; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    for (i=p; i<p+q; i++)
    {
        cin >> arr[i];

    }

    sort(arr,arr+(p+q));

    for (i=0; i<p+q; i++)
    {
        if (arr[i]!= arr[i+1])
        count++;
    }
 if (f==count)
 cout <<"I become the guy."<< endl;
 else 
  cout <<"Oh, my keyboard!"<< endl;
 
return 0;
}
#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
    int t;
    cin >> t;
    while (t--)
    {
        int n; 
        cin >>n;
        int arr[n];
        for (int i=0;  i<n; i++)
        {
            cin >> arr[i];
        }

        sort (arr,arr+n);
        bool istrue=true;
        for (int i=n-1; i>0; i--)
        {
            if (arr[i]-arr[i-1] >1)
            {
                istrue=false;
                break;
            }
        }
        if (istrue)
        {
            cout << "YES"<< endl;
        }
        else 
        cout <<"NO"<<endl;
    }
 
return 0;
}
#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
    int t;
    cin>> t;
    while(t--)
    {
        int arr[4];
        int i;
        for (i=0;i<4;i++)
        cin>> arr[i];

        int a=0;
        for (i=1; i<4; i++)
        {
            if (arr[i]>arr[0])
            {
                a++;
            }
        }
        cout<<a<<endl;
    }

 
return 0;
}
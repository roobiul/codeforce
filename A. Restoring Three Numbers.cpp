#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
int arr[4];

for (int i=0; i<4; i++)
{
    cin >> arr[i];

}
sort(arr,arr+4);
int a,b,c;
c=arr[3]-arr[0];
b=arr[2]-c;
a=arr[3]-(b+c);
cout << a << " "<<b <<" "<< c<< " "<< endl;
 
return 0;
}
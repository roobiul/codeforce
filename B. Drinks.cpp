#include<iostream>
#include<string>
#include<bits/stdc++.h>
//roobiul~github 
using namespace std;
 
int main () {
 
int n,i;
cin >> n;
float sum=0;
int arr[n];
for (i=0;i<n; i++)
{
    cin >> arr[i];
    sum+= arr[i];
}

cout << showpoint<<sum/n<<endl;
 
return 0;
}   
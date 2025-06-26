#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
int t;
cin >> t;
while (t--)
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum1=a+b;
    int sum2=b+c;
    int sum3=c+a;
    if (sum1 >=10)
    {
        cout << "YES"<<endl;
    }
    else if (sum2>=10)
    {
        cout << "YES"<<endl;
    }
    else if (sum3>=10)
    {
        cout << "YES"<<endl;
    }
    else
         cout << "No"<<endl;

}
 
 
return 0;
}
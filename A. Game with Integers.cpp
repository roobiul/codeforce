#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
long long int n,t;
cin >> t;
while (t--)
{
   cin >> n;
   if (n%3==0)
   {
    cout << "Second"<< endl;

   }
   else
   cout << "First"<< endl;

}
 
 
return 0;
}
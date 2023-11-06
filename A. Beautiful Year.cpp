#include<iostream>
//#include<string>
 
using namespace std;
 
int main () {
  int b=0,c=0,d=0,e=0;
int n;
cin >> n;

for (;;)
{
   
    n++;
    b=n/1000;
    c=(n/100)%10;
    d=(n/10)%10;
    e=(n%10);
   
    if (b!=c && b!=d && b!=e && c!=d && c!= e && d!=e)
    {
        break;;
    }
    
    
       
        
}
cout << n<< endl;
 
return 0;
}
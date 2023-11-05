#include<iostream>
//#include<string>
 
using namespace std;
 
int main () {
 
    long long int n;
    cin >> n;

    int n100=0,n20=0,n10=0,n5=0,n1=0;

    n100=n/100;
    n20=(n%100)/20;
    n10=(n%20)/10;
    n5=(n%10)/5;
    n1=(n%5)/1;

    cout << n100+n20+n10+n5+n1<< endl;
 
return 0;
}
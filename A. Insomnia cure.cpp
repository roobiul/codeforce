#include<iostream>
//#include<string>
 
using namespace std;
 
int main () {
    int k,l,m,n,i,count=0,d;
    cin >> k>>l>>m>>n>>d;

    for (i=1; i<=d; i++)
    {
        if (i%k==0 || i%l==0 || i%m==0 || i%n==0)
        {
            count++;
        } 
    }
    
        cout << count <<endl;
    
return 0;
}
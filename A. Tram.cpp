#include<iostream>
using namespace std;

int main ()

{
    int n,a1,a2,final=0,bus=0;
    cin >> n;
    while (n--)
    {
        cin >>a1;
         bus=bus-a1;
         cin >>a2;
         bus=bus+a2;
       
        if (final<bus)
        {
            final=bus;
        }
    }
    cout << final<<endl;
    
}

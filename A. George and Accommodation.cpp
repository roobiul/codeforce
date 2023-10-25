#include<iostream>

using namespace std;
int main ()
{
    int t,a,b,h=0,g=0;
    cin >> t;
    while (t--)
    {
        cin >>a>>b;
        if ( b-a>=2)
        g++;
        /* code */
    }
    
    cout << g<<endl;
}
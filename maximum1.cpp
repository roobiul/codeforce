#include<iostream>

using namespace std;

int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<< "The largest number is ";
    if (a>b && a>c)
        cout <<a;
    else if (b>c && b>a)
        cout <<b;
    else
        cout <<c;
    return 0;
}

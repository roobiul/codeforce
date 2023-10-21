#include<iostream>

using namespace std;
int main ()
{
    int k,n,w,i,sum=0;

    cin>> k>>n>>w;
    for (i=1;i<=w; i++)
    {
        sum=sum+i;
    }
    int d=(k*sum)-n;
    if (d<0)
    cout << "0" <<endl;
    else
    cout << d << endl;
}
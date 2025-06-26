
#include<iostream>

using namespace std;

int main()
{
    int a[]={7,3,5,4,9};
    int i,value ,hole,sizen;
    cin>>sizen;

    for (i=1; i<sizen;i++)
    {
        value=a[i];
        hole=i;
    while (hole> 0 && a[hole-1]> value)
    {
        a[hole] = a[hole-1];
        hole--;

    }
    a[hole]=value;
    }
    for (i=0;i<sizen; i++)
    {
        cout<<a[i]<<" ";
    }
}

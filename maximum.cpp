#include<algorithm>
#include<iostream>

using namespace std;

int main ()
{
    int a,b,c;
    a=10,b=20,c=10;
    int num;
    num=max(a,max(b,c));
    cout<<num<<" is the largest number";
    return 0;
}

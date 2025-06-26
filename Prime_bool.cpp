#include<bits/stdc++.h>
using namespace std;
bool prime[100009];
int main()
{
    prime[0]=1;
    prime[1]=1;
    long long i,j;
    vector<int>monir;
    for(i=4;i<100009;i+=2)
    {
        prime[i]=1;
    }
    for(i=3;i<100009;i+=2)
    {
        for(j=i*i;j<100009;j+=i)
        {
            prime[j]=1;
        }
    }
    for(i=0;i<=1000;i++)
    {
        if(!prime[i])
        {
           monir.push_back(i);
        }
    }
    for(i=0;i<=100;i++)
    {
        cout<<monir[i]<<endl;
    }
    return 0;
}
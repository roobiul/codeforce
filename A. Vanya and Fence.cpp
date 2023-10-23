#include<iostream>

using namespace std;

int main ()
{
    int n,k,a,count=0;
    cin >> n>>k;
    while (n--)
    {
        cin >> a;
        if (a<=k)
        {
            count=count +1;

        }
        else{
            count=count+2;
        }
        /* code */
    }
    cout << count<< endl;
    
}
#include<iostream>

using namespace std;

int main ()
{
    int n,a,i,e=0;
    cin >> n;
    for (i=0;i<n;i++)
    {
        cin >>a;
        if (a==0)
        e++; 
               /* code */
    }
    if (e==n)
    {
        cout << "EASY"<< endl;
    }
    
    else
    cout << "HARD"<< endl;
}
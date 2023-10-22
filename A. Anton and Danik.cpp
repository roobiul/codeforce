#include<iostream>
#include<string>
using namespace std;

int main ()
{
    int n,i,a=0,d=0;
    //cin >> n;
    char s;
    while (cin >>n)
    {


    for (i=0; i<n; i++)
    {
        cin >> s;
        if (s=='A')
        {
            a++;
        }
        else 
        {
            d++;
        }

    }
    
    if (a>d)
    cout << "Anton" << endl;
    else if (d>a)
    cout << "Danik" << endl;

    else 
    cout <<"Friendship"<< endl;
    }
}
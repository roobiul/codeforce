#include<iostream>
#include<string>
 
using namespace std;
 
int main () {
    int a,i;
    cin >> a;
    int arr[a];
    
    for (i=0; i<a; i++ )
    {
        cin >> arr[i];
    }

    for (int j=1;j<=a;j++)
    {
        for (i=0; i<a;i++)
        {
            if (arr[i]==j)
            {
                cout<< i+1<< " ";
            }
        }
    }
 
 
return 0;
}
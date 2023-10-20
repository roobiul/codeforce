//#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;
int main()
{
    int a,b,year=0;

    cin >> a>>b;
    for (year=1; ; year++)
{

    a=a*3;
    b=b*2;
    if (a==b)

    continue;
    else if (a>b)
    break;
}
    cout << year << endl;
    


    
}
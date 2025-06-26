#include<iostream>
//#include<string>

 
using namespace std;
 void calculation (long long);
int main () {
 long long n; cin >> n;
 calculation(n);

return 0;
}

void calculation (long long b)
{
    long long b, a;
   
    if(b % 2 == 0) a = b / 2;
    else a = ((b + 1) / 2) * (-1);
    cout << a << endl;
}
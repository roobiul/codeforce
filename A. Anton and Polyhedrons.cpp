#include<iostream>
//#include<string>
 
using namespace std;
 
int main () {
 
long long int n;
cin >>n;
string s;
int Tetrahedron=0,Cube=0,Octahedron=0,Dodecahedron=0,Icosahedron=0;
while (n--)
{
    cin >> s;
    if (s=="Tetrahedron")
    {
        Tetrahedron+=4;
    }
    else if (s=="Cube")
    {
        Cube+=6;
    }
    else if (s=="Octahedron")
    {
        Octahedron+=8;
    }
    else if (s=="Dodecahedron")
    {
        Dodecahedron+=12;
    }
    else if (s=="Icosahedron")
    {
        Icosahedron+=20;
    }
    
}
cout << Tetrahedron+Cube+Octahedron+Dodecahedron+Icosahedron<<endl;

 
return 0;
}
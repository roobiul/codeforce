#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string s;
    int i,up=0,lo=0;
    cin >>s;
    for (i=0; i<s.size(); i++)
    {
        if (isupper(s[i]))
        up++;
        else
        lo++;
    }

    if (up>lo)
    {
        for (i=0; i<s.size(); i++)
        s[i]=toupper(s[i]);
    }
    else
    {
        for (i=0; i<s.size(); i++)
        s[i]=tolower(s[i]);
    }
    

    cout << s << endl;
}
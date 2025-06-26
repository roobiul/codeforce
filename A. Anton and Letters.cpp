#include<iostream>
#include<string.h>
#include<algorithm>
 
using namespace std;
 
int main () {
    string s;
    int i,count =0;
    getline(cin,s);
    sort (s.begin(),s.end());
    for ( i = 0; i < s.size(); i++)
    {
        if (s[i]=='{}' || s[i]==',' || s[i]==' ')
        {
            continue;
        }
        else
        {
            if (s[i]!=s[i+1])
            {
                count++;
            }
        }
    }
    cout << count-2;
   
   
   
return 0;
}
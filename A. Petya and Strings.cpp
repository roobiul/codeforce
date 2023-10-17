//#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[120],str1[120];
    cin >> str >> str1;

    for(int i=0; i<strlen(str);  i++)
        str[i] = tolower(str[i]) , str1[i] = tolower(str1[i]);


    cout << strcmp(str,str1) << endl;
}
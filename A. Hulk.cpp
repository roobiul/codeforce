#include<iostream>
#include<string>
 
using namespace std;
 
int main () {

        string n;
        int i;
        cin >> n;
        for (i=0; i<n.size();i++)
        
        {   if (n[i]%2!='0')
        {
            cout << "I hate ";
        }
            else if (n[i]%2=='0')
        {
            cout << "I love ";
        }
            cout << "that ";
        }
        
        cout << "it"<< endl;
 
return 0;
}
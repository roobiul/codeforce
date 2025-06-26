#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        vector<int>num(26,-1),a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
 
            for(char k='z'; k>='a'; k--)
            {
                if(num[k-'a']== a[i]-1)
                {
                    num[k-'a']++;
                    s+=k;
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
}

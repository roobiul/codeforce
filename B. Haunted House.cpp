//#include<iostream>
//#include<string>
#include<bits/stdc++.h>
using namespace std;

  void solve()
    {
        long long n;
        cin >> n;
        string str; cin>> str;
        long long zc=0;
        vector <long long> pos;
        reverse(str.begin(),str.end());
        for (long long i=0; i<n; i++)
        {
            if (str[i]=='0')
            {
                zc++;
                pos.push_back(i+1);

            }
        }
        long long k=1,prev=0;
        for (long long i=0;i<pos.size();i++)
        {
            cout<<pos[i]-k+prev<<" ";
            prev+=pos[i]-k;
            k++;
        }

        for (long long i=0; i<n-zc; i++)
        {
            cout<< "-1";
        }
        cout<< endl;


    }
    int main ()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        long long t; cin >> t;
        while (t--)
        {
            solve();
        }
    }

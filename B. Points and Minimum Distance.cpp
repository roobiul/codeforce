    #include<bits/stdc++.h>
    using namespace std;
    #define ll   long long int
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            vector<int>v;
            for(int i=0; i<2*n; i++)
            {
                int x;
                cin>>x;
                v.push_back(x);
            }
            sort(v.begin(),v.end());
            int ans =0;
            for(int i=0; i<n-1; i++)
            {
     
                ans=ans+abs(v[i]-v[i+1]);
            }
            for(int i=2*(n-1); i>=n; i--)
            {
     
                ans=ans+abs(v[i]-v[i+1]);
            }
            cout<<ans<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<v[n+(i)]<<" "<<v[i]<<endl;
            }
        }
    }
    
    
    #include<iostream>
    #include<string>
    #include<bits/stdc++.h>
    #define ll long long int 
    using namespace std;
    //بسم الله الرحمن الرحيم  
    int main () {
     
     
     
   
    int t,n,i;
     ll a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n],rem=0,s=0;
        int count = 0;
 
        for (i = 0; i < n; ++i)
        {
            cin>>a[i];
            s = s + a[i];
        }
 
        s = s/n;
 
        for (i = 0; i < n; ++i)
        {
            rem = a[i] - s + rem ;
            
            if(rem<0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
 
 
    }
     return 0;
    }
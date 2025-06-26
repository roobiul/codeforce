    #include <iostream>
    #include<string.h>
    #include<stdio.h>
    #include <bits/stdc++.h>

    
    
     
    //robiul_islam
    using namespace std;
     
    int main() {
     
       long long int t,m,s;
      int n[1000000]={0};
        for (long long int i=2; i<1000000; i++)
        {
            if (n[i]==0)
            {
                for (long long int j=2; i*j<1000000; j++)
                n[i*j]=1;
            }
           
        }
       cin >>t;
       while (t--) {
        cin >> m ;
        
        s=sqrt(m);
        if (m==1)
        cout << "NO" << endl;

        else if (s*s==m && n[s]==0)
        {
        cout << "YES" << endl;
        }
        else
        cout << "NO" << endl;
        }
     
        return 0;
    }

#include<iostream>

using namespace std;

int main()
{
    int i,a,b,c,user,temp=0;
    cin>>user;
    for (i=1; i<=user; i++)
    {
        cin>>a>>b>>c;
        if (a==1 && b==1)
        {
            temp=temp+1;
        }

        else if (b==1 && c==1)
        {
            temp=temp+1;
        }
        else if (c==1 && a==1)
        {
            temp=temp+1;
        }

    }
    cout<< temp<<endl;

}

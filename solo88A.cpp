#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    int tc,i,x,y,z,temp=0;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        temp=0;
        cin>>x>>y>>z;
        if((z%x)==0)
            temp=1;
        if(z%y==0)
        {
            if(temp==1)
                temp=3;
            else
                temp=2;
        }
        if(temp==0)
            cout<<"NONE"<<endl;
        if(temp==3)
            cout<<"ANY"<<endl;

        if(temp==1)
            cout<<"CHICKEN"<<endl;
        if(temp==2)
            cout<<"DUCK"<<endl;
    }

}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,x,y;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int m;
        cin>>x>>y>>m;
        if(x+y==m)
            cout<<"+"<<endl;
        else
            cout<<"-"<<endl;
    }
}

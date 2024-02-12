#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,tc;
    cin>>tc;
    for(i=0  ; i<tc ; i++)
    {
        int x,y,z,m,a,b;
        cin>>a>>b;
        x=(100-a);
        y=200-(2*b);
        if(x<y)
            cout<<"FIRST"<<endl;
        else if(y<x)
            cout<<"SECOND"<<endl;
        else
            cout<<"BOTH"<<endl;
    }
    return 0;

}





#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,x,y=0,n,j,i,a,b,c;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        cin>>n;
        if(n%2==1)
            cout<<"-1"<<endl;
        else
            cout<<"0"<<" "<<"0"<<" "<<n/2<<endl;
    }
}



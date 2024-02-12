#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    int i,j,cnt=0,x,y,m,n,temp=0;
    cin>>n>>m;
    while((temp*temp)<=n)
    {
        x=temp;
        y=(n-(x*x));
        if(x+(y*y)==m)
            cnt++;
        //cout<<x<<" "<<y<<endl;
        temp++;
    }
    temp=0;
    /*while((temp*temp)<=m)
    {
        y=temp;
        x=(m-(y*y));
        if((x*x)+y==n)
            cnt++;
        //cout<<x<<" "<<y<<endl;
        temp++;
    }*/
    cout<<cnt<<endl;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,b,m,n,ans=0,c,d;
    double p;
    cin>>n>>m>>a>>b;
    p=(b/m);
    if(a<=p)
    {
        ans=n*a;
    }
    else
    {
        int x=n/m;
        int y=n-(x*m);
       if(b<=y*a)
        ans=(x*b)+b;
       else
        ans=(x*b)+(y*a);
    }
    cout<<ans<<endl;
}

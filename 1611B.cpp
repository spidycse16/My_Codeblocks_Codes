#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,tc,x,a,b;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int temp,ans,j;
        cin>>a>>b;
        if(b<=a)
           swap(a,b);
           temp=(a+b)/4;
           if(temp>=a)
            ans=a;
           else
            ans=temp;
           cout<<ans<<endl;
    }
}

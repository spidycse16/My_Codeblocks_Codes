
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,x,y,n,i;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int ans=0;
        cin>>n;
        int temp=n;
        if(n%9!=0)
        ans=n/9;
        else
            ans=(n/9)-1;
        cout<<ans+n<<endl;
    }
}


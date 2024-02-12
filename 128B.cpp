#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,x,y,n,i;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        cin>>x>>y;
        int m,z,ans=0;
        if(x%y==0)
            cout<<x<<endl;
        else
        {
            if(x%y>(y/2))
            {
                z=(x/y);
                z++;
                ans=ans+(z*(y/2));
                y=y-(y/2);
                z--;
                ans=ans+(y*z);
            }
            else
            {
                z=(x/y);
                z++;
                ans=ans+(z*(x%y));
                z--;
                y=y-(x%y);
                ans=ans+(z*y);
            }
            cout<<ans<<endl;
        }
    }

}

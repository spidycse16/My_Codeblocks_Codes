#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,x,y,l,r,a,ans=0;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        ans=0;
        cin>>l>>r>>a;
        if(l/a==r/a)
            {
                cout<<((r/a)+(r%a))<<endl;
            }
            else
            {
                x=(r/a)+(r%a);
                y=((r/a)-1)+(a-1);
                if(x>y)
                    ans=x;
                else
                    ans=y;
            cout<<ans<<endl;
            }

    }
}



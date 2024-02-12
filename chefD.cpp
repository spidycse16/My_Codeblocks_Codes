#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,tc;
    cin>>tc;
    for(i=0  ; i<tc ; i++)
    {
        long long int x,y,z,cnt=0,ans=1;
        cin>>x>>y;
        for(j=2 ; j<=sqrt(x) ; j++)
        {
            if(x%j==0)
            {
                cnt++;
                x=x+j;
                break;
            }

        }
        if(cnt==0)
            x=x+x;
        if(y%2==1)
        {
            y++;
            z=(y-x)/2;
            ans=ans+z;
            cout<<ans<<endl;

        }
        else
        {
            z=(y-x)/2;
            ans=ans+z;
            cout<<ans<<endl;
        }

    }
    return 0;

}







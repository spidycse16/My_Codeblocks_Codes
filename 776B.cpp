#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,l,r,x,a,ma,mod;
    int tc;
    cin>>tc;
    for(int i=0 ; i<tc ; i++)
    {
        int flag=0;
        cin>>l>>r>>a;
        for(j=r ; j>=l ; j--)
        {
            if(j%a==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
            mod=j-1;
        else
            mod=r;
            //cout<<mod<<endl;


        else

        cout<<(mod/a)+(mod%a)<<endl;
    }
}


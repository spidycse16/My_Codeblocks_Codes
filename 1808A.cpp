#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,x,y,n,i;
    cin>>tc;
    for(int k=0 ; k<tc ; k++)
    {
        int cnt=0,l,r,flag=0,luck=0,res=0;
        cin>>l>>r;
        for(i=l ; i<=r ; i++)
        {
            int temp,mx=0,mi=10;
            if(i<10)
            {
                //1luck=i;
                res=i;
            }
            else
            {
                temp=i;
                while(temp>0)
                {
                    int d;
                    d=temp%10;
                    if(d>mx)
                        mx=d;
                    if(d<mi)
                        mi=d;
                    temp=temp/10;
                }
                //cout<<"i="<<mx-mi<<endl;
                if((mx-mi)>=luck)
                {
                    luck=(mx-mi);
                    // cout<<"luck="<<mx<<"i="<<mi<<endl;
                    res=i;
                }
                if((mx-mi)==9)
                {
                    //cout<<"X"<<endl;
                    res=i;
                    break;
                }
            }

        }
        cout<<res<<endl;
    }

}

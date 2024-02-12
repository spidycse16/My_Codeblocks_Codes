#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,i,ans=0;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int a,b,cnt1=0,cnt2=0,temp;
        cin>>a>>b;
        if(b<=a)
        {
            temp=b;
            b=a;
            a=temp;
        }
        //cout<<a<<" "<<b;
        if(a==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(b/a>=a)
        {
            cout<<a<<endl;
            continue;
        }
        else if(a==b)
        {
            cout<<a/2<<endl;
            continue;
        }

        else
        {
            for(int j=1 ; j<=a ; j+=2)
            {
                temp=b;
                temp-=2;
                if(a-j==1)
                {
                    if(temp>=3)
                    {
                        cnt1++;
                        break;
                    }
                }
                else
                cnt1++;
            }
        }
        for(int j=1 ; j<=a ; j++)
        {
            temp=b;
            temp-=3;
            if(temp<3)
            {
                if((a-j)+temp>=4)
                   {
                    cnt2++;
                       break;
                   }
            }
            else
            cnt2++;
        }
        if(cnt1>=cnt2)
            ans=cnt1;
        else
            ans=cnt2;
    cout<<ans<<endl;
    }
}


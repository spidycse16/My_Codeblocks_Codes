#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tc,i,j,x,temp,y,diff;
    cin>>tc;
    for(i=0 ; i<tc; i++)
    {
        int cnt=0;
        cin>>n;
        if(n<10)
        {
            cout<<n<<endl;
        }
        else
        {
            for(j=10 ; j<=n ; j++)
            {
                cout<<"j="<<j<<endl;
                temp=j;
                y=j;
                x=j%10;
                while(temp>0)
                {
                    temp=temp/10;
                    if(temp%10!=x)
                        break;

                }
                if(temp==0)
                {
                    int z=0;
                    cnt++;
                   while(y>0)
                   {
                       y=y/10;
                       z++;
                       //cout<<"z="<<z<<endl;
                   }
                       j+=pow(10,z-1);
                }
            }
            cout<<cnt+9<<endl;
        }
    }

}

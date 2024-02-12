#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int tc,x,y,n,j,i;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int a,b,c,d,cnt=0,flag=0;
        cin>>a>>b>>c>>d;
        if(b>d)
        {
            //cout<<"x1"<<endl;
            flag=1;
        }
        else if(a==c && b==d)
            flag=2;
        else
        {
            for(j=0 ; ; j++)
            {
                if(b==d)
                    break;
                a++;
                b++;
                cnt++;
            }
            //cout<<a<<" "<<b<<" "<<endl;
            if(a>=c)
            {
                for(j=0 ;  ; j++)
                {
                    if(a==c)
                        break;
                    a--;
                    cnt++;
                }
            }
            else
            {
                //cout<<"x"<<endl;
                flag=1;
            }
        }
        if(flag==1)
            cout<<"-1"<<endl;
        else if(flag==2)
            cout<<"0"<<endl;
        else
            cout<<cnt<<endl;
    }
}

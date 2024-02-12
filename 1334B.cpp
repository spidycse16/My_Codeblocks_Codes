#include<bits/stdc++.h>
using namespace std;
long long int a[5];
int main()
{
    long long int tc,i,j,row,col,ans;
    cin>>tc;
    for(i=0 ;  i<tc; i++)
    {
        long long int x=0,flag=0,y=0,n;
        cin>>n;
        long long int temp=n;
        while(temp!=1)
        {
            if(temp%2==0)
            {
                x++;
                temp=temp/2;
            }
            else if(temp%3==0)
            {
                y++;
                temp=temp/3;
            }
            else
            {
                flag=1;
                break;

            }
        }
        if(flag==1)
            cout<<"-1"<<endl;
        else if(x>y)
            cout<<"-1"<<endl;
        else
        {
            cout<<(y-x)+y<<endl;
        }

    }
}




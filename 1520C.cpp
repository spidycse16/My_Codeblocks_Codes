#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt,ans,res,flag,ma;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        cin>>n;
        ll arr[n+5][n+5];
        for(i=1 ; i<=n ; i++)
            {
                for(j=1 ; j<=n ; j++)
                    arr[i][j]=0;
            }
        x=1;
        if(n==2)
            cout<<"-1"<<el;
        else
        {
            for(i=1 ; i<=n ; i++)
            {
                arr[i][i]=x;
                x++;
            }
            for(i=1 ; i<=n ; i++)
            {
                if(arr[i][n-(i-1)]==0)
                {

                    arr[i][n-(i-1)]=x;
                    x++;
                }
            }
            m=x+1;
            for(i=1 ; i<=n ; i++)
            {
                for(j=1 ; j<=n ; j++)
                {
                    if(x>(n*n))
                    x=m;
                    if(arr[i][j]==0)
                    {
                    arr[i][j]=x;
                    x+=2;

                    }

                }
            }
            for(i=1 ; i<=n ; i++)
            {
                for(j=1 ; j<=n ; j++)
                    cout<<arr[i][j]<<" ";
            cout<<el;
            }
        }
    }
}

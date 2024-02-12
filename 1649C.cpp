#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,k,l;
    cin>>m>>n;
    int v[m+5][n+5];
    vector<int> row;
    int ans=0;
    for(i=1 ; i<=m ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            int x;
            cin>>x;
            v[i][j]=x;
        }
    }
    for(i=1 ; i<=m ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            for(k=i ; k<=m ; k++)
            {
                for(l=1 ; l<=n ; l++)
                {
                    if(v[i][j]==v[k][l])
                    {
                        if(j!=l)
                        {
                            ans=ans+(abs(i-k)+abs(j-l));
                            //v[i][j]=-100;
                        }

                        cout<<"k= "<<k<<" l= "<<l<<" ans ="<<abs(i-k)+abs(j-l)<<endl;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}


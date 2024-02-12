#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main()
{
    int tc,i,j,x,y,sum=0,n;
    cin>>n;
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            cin>>a[i][j];
        }
    }
    int temp=n;

      for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
           if(i==j)
           {
            sum=sum+a[i][j];
               a[i][j]=0;
           }
           if(i==(n/2)+1)
           {
               sum=sum+a[i][j];
               a[i][j]=0;
           }
           if(j==(n/2)+1)
           {
               sum=sum+a[i][j];
               a[i][j]=0;
           }
        }
        sum=sum+a[temp--][i];
    }
    cout<<sum<<endl;
}

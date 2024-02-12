#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,i,j,x,m;
    cin>>tc;
    for(int k=0 ; k<tc;  k++)
    {
        cin>>x>>m>>n;
       for(j=0 ; j<m ; j++)
        {
            if(x>20)
            {
            x=(x/2)+10;

            }
            else
                break;
            if(x<=0)
                break;
        }
        for(j=0 ; j<n ; j++)
        {
            x=x-10;
            if(x<=0)
                break;
        }
        if(x<=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}






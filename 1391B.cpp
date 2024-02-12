#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,row,col,ans;
    cin>>tc;
    for(i=0 ;  i<tc; i++)
    {
        ans=0;
        cin>>row>>col;
        for(j=0 ; j<row ; j++)
        {
            for(int k=0 ; k<col ; k++)
            {
                char x;
                cin>>x;
                if(k==col-1)
                {
                    if(x=='R')
                    {
                        ans++;
                    }

                }
                if(j==row-1)
                {
                    if(x=='D')
                        ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}

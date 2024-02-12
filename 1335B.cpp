#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,x,y;
    cin>>tc;
    for(int k=0 ; k<tc; k++)
    {
        int n,cnt=0;
        vector<int> v;
        cin>>n>>x>>y;
        while(cnt<n)
        {
            for(j=1 ; j<=y ; j++)
            {
                v.push_back(j);
                cnt++;
                //cout<<v[j]<<endl;
                if(cnt==n)
                    break;
            }
        }

        for(i=0 ; i<n ; i++)
        {
            char ch;
            ch=v[i]+96;
            cout<<ch;
        }
        cout<<endl;
    }
}

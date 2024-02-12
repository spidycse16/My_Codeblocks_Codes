#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,tc;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        vector <int> v;
        int n,sum=0;
        cin>>n;
        for(int j=0 ; j<n ; j++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int j=0 ; j<n-1 ; j++)
        {
            sum=sum+(v[n-1]-v[j]);
        }
        // cout<<"sum="<<sum<<endl;
        for(j=1 ; ; j++)
        {
            if(sum==2)
            {
                if(j%2==1)
                {
                    j+=1;
                    break;
                }
                else
                    break;
            }
            if(sum==1)
            {
                if(j%2==0)
                {
                    j=j+1;
                    break;
                }
                else
                    break;
            }
            if(j%2==1)
                sum-=1;
            else
                sum-=2;
        }
        cout<<j<<endl;
    }
}

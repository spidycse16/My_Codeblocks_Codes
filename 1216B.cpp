#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,b,x,y=0,ans=0;
    cin>>n;
    vector <int> v;
    vector <int> v1;
    vector <int> res;
    for(i=0 ; i<n ; i++)
    {
        cin>>x;
        v.push_back(x);
        v1.push_back(x);
    }
    sort(v.begin(),v.end());
    for(j=v.size()-1 ; j>=0 ; j--)
    {
        for(i=0 ; i<n ; i++)
        {
            if(v[j]==v1[i])
            {
                res.push_back(i+1);
                ans=ans+((y*v[j])+1);
                y++;
                v1[i]=-1;
                break;
            }
        }
    }
    cout<<ans<<endl;
    for(i=0 ; i<res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;

}



#include<bits/stdc++.h>
using namespace std;
vector <int> v;
vector <int> v2;
int cnt=0;
int count_in()
{
    for(int k=0 ; k<v.size()-1 ; k++)
    {
        for(int l=k+1 ; l<v.size() ; l++)
        {
            if(v[k]>v[l])
                cnt++;
        }
    }
    return cnt;
}
int main()
{

    int tc,i,j,k;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int n,ans,res,x;
        cin>>n;
        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            v.push_back(x);
        }
        if(v[0]==0)
        {
            if(v[v.size()-1]==1)
            {
               v[0]=1;
               ans=count_in();
               v[0]=0;
               v[v.size()-1]=0;
               res=count_in();
               if(res>ans)
                ans=res;
            }
            else
            {
                v[0]=1;
                ans=count_in();
            }
        }
        else
        {
            v[v.size()-1]=0;
            ans=count_in();
        }
        cout<<ans<<endl;
        cnt=0;
        v.clear();
    }
}



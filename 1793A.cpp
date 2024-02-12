#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,tc,x,y,a,b,m,n;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        vector <long long int> v;
        cin>>a>>b>>n>>m;
        v.push_back(n*a);
        v.push_back(n*b);
        long long int temp=m;
        m++;
        long long int ans=0;
        long long int z=(n/m);
        while(z>0)
        {
            ans=ans+(temp*a);
            n=n-m;
            z--;
        }
        ans=ans+(n*b);
        v.push_back(ans);
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
}

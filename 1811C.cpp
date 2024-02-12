#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,x,y,n,i;
    cin>>tc;
    for(long long int k=0 ; k<tc ; k++)
    {
        int ma;
        vector <int> v;
        cin>>n;
        int a[n+5];
        for(i=0 ; i<n-1 ; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        a[0]=v[0];
        for(i=1 ; i<n-1 ; i++)
        {
            a[i]=min(v[i],v[i-1]);
        }
        a[n-1]=v[v.size()-1];
        for(i=0 ; i<=n-1 ; i++)
            cout<<a[i]<<" ";
        cout<<endl;

}
}



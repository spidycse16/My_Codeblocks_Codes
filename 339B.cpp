#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll ans=0,n,m,x;
    vector <ll> v;
    cin>>n>>m;
    for(ll i=0 ; i<m ;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(ll i=0 ; i<v.size()-1 ; i++)
    {

        if(v[i]<v[i+1])
            ans += (v[i+1]-v[i]);
        else if(v[i]>v[i+1])
            ans += n+(v[i+1]-v[i]);
    }
    ans  += (v[0] - 1);
    cout<<ans<<endl;

}

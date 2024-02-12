#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main()
{
    ll i,j,n,sum=0;
    cin>>n;
    vector <ll> v;
    for(i=0 ; i<n ; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(i=0 ; i<v.size()/2 ; i++)
    {
        ll sq=1;
        sq=(v[i]+v[v.size()-1-i])*(v[i]+v[v.size()-1-i]);
        //cout<<"sq="<<sq<<endl;
        ans=ans+sq;
    }
    cout<<ans<<endl;
}

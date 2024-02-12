#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ma 0
#define slen s.size()
#define vlen v.size()
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt,ans,res,flag;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        cin>>n;
        ans=0;
        map <ll,ll> mp;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(i=0 ; i<vlen ; i++)
        {
            x=v[i]-i;
            ans=ans+mp[x];
            mp[x]++;
        }
        cout<<ans<<el;
        v.clear();
        mp.clear();
    }
}

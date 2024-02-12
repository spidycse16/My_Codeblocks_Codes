#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,x,y,n,i,j,k,d,m,h,z,cnt,ans,res,flag,ma;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
map<ll,ll> mp;
set <ll> st;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        ans=0;
        vector <ll> v;
        cin>>n>>m>>k>>h;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            x=abs(x-h);
            v.pb(x);
        }
        for(i=1 ; i<=m-1 ; i++)
        {
            y=i*k;
            for(j=0 ; j<vlen ; j++)
            {
                if(y==v[j])
                    ans++;
            }
        }
        cout<<ans<<el;
    }
}

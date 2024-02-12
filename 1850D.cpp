#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt,ans,res,flag,ma;
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
        cnt=0,ma=0;
        vector <ll> v;
        vector <ll> dif;
        cin>>n>>k;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            v.pb(x);
        }
        sort(v.begin(),v.end());
        for(i=0 ; i<vlen-1 ; i++)
        {
           y=v[i+1]-v[i];
           dif.pb(y);

        }
        dif.pb(k+1);
        for(i=0 ; i<dif.size() ; i++)
        {
            if(dif[i]<=k)
            {
                cnt++;
            }
            else
            {
                if(cnt>ma)
                    ma=cnt;
                cnt=0;
            }
        }
        cout<<n-(ma+1)<<el;
    }
}




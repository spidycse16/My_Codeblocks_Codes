#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt,ans,res,flag,ma;
char ch;
string s,str;
vector <ll> v;
map<ll,ll> mp;
set <ll> st;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        ll mi=numeric_limits<ll>::max();
        ll ma=0;
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            if(x>ma)
                ma=x;
            if(x<mi)
                mi=x;
            v.pb(x);
        }
        y=ma+mi;
        for(i=0 ; i<vlen ; i++)
            cout<<y-v[i]<<" ";
        cout<<el;
        v.clear();
    }
}

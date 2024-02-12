#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt,ans,res,flag,ma,a,b;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
map<ll,ll> mp;
set <ll> st;
ll dif(ll a,ll b,ll x,ll y, ll m)
{
    if(a-m<x)
    {
        m=m-(a-x);
        a=x;
        b=b-m;
    }
    else
        a=a-m;
    //cout<<"a= "<<a<<"b = "<<b<<el;
    return a*b;
}

int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        cin>>a>>b>>x>>y>>m;
        if(m>=(a-x)+(b-y))
            cout<<(x*y)<<el;
        else
        {
        res=dif(a,b,x,y,m);
        ans=dif(b,a,y,x,m);
        cout<<min(res,ans)<<el;


        }
    }
}


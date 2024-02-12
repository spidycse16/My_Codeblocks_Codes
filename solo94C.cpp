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
        ll a,b,c,p;
        cin>>p>>a>>b>>c>>x>>y;
        m=(b)+(x*a);
        n=(c)+(y*a);
        ans=p/m;
        res=p/n;
        if(ans>res)
            swap(ans,res);
        cout<<res<<el;
    }
}



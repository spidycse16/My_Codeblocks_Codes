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
vector <ll> v;
map<ll,ll> mp;
set <ll> st;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        cin>>n;
        ans=0;
        if(n==1)
            cout<<"-1"<<el;
        else
        {
            v.pb(3);
            for(i=0 ; i<n-2 ; i++)
                {
                    v.pb(2);
                    ans=ans+2;
                }
            v.pb(3);
            ans=ans+6;
            if(ans%3==0)
                v[0]=5;
            for(i=0 ; i<vlen ; i++)
            cout<<v[i];
            cout<<el;
        }
        v.clear();
    }
}

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
    for(z=0 ; z<tc;  z++)
    {
        vector <pair<char,int>> v;
        ll mi=numeric_limits<ll>::max();
        cin>>s;
        s[slen]='5';
        cnt=1;
        for(i=0 ; i<slen ; i++)
        {
            if(s[i]==s[i+1])
            {
                cnt++;
            }
            else
            {
                v.push_back(make_pair(s[i],cnt));
                cnt=1;
            }
        }
        if(vlen<3)
            cout<<"0"<<el;
        else
        {

            for(i=0 ; i<vlen-2 ; i++)
            {
                if(v[i].first!=v[i+2].first)
                {
                    ans=v[i+1].second+2;
                    if(ans<mi)
                        mi=ans;
                }
            }
            if(mi==numeric_limits<ll>::max())
                cout<<"0"<<el;
                else
                cout<<mi<<el;
        }
    }
}


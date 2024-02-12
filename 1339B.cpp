#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
#define sortv sort(v.begin(),v.end())
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
        vector <ll> v1;
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            if(x<0)
                v1.pb(x);
                else
                    v.pb(x);
        }
        sortv;
        for(i=0 ; i<v1.size() ; i++)
        {
            flag=0;
            for(j=0 ; j<vlen-1 ; j++)
            {
                if(v[j+1]-v[j]>=abs(v[j]-v1[i]))
                {
                    v.resize(vlen+1);
                    v[j]=v1[i];
                    flag=1;
                }
            }
            if(flag==0)
                v.pb(v1[i]);
        }
        for(i=0 ; i<vlen ; i++)
            cout<<v[i]<<" ";
        cout<<el;
    }
}

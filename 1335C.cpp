#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define ma 0
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
        map <ll,ll>mp;
        ans=0;
        ll ma=0;
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            mp[x]++;
            if(mp[x]>ma)
                ma=mp[x];
        }
        d=mp.size();
        if(mp.size()-1>=ma)
        {
            ans=ma;
        }
        else
        {
            for(i=ma-1 ; ; i--)
            {
                if(mp.size()>=i)
                    {
                        ans=i;
                        break;
                    }
                    if(i==0)
                        break;

            }

        }
        cout<<ans<<el;
    }
}

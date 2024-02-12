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
        ma=0,ans=0;
      cin>>n;
      for(i=1 ; i<=n ; i++)
      {
          cin>>x>>y;
          if(x<=10)
          {
              if(y>ma)
                {
                    ma=y;
                    ans=i;
                }
          }
      }
      cout<<ans<<el;
    }
}


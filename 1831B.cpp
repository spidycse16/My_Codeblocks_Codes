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
set <ll> st;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        map<ll,ll> mp;
        ll cnt=1,ma=1,d=1,temp;
        cin>>n;
        for(j=0 ; j<n ; j++)
        {
            temp=x;
            cin>>x;
            if(j>0)
            {
                if(temp==x)
                    cnt++;
                else
                {
                    if(cnt>ma)
                    ma=cnt;
                    cnt=1;
                }
            }
        }
        cnt=1;
        for(j=0 ; j<n ; j++)
        {
            temp=x;
            cin>>x;
            if(j>0)
            {
                if(temp==x)
                    cnt++;
                else
                {
                    if(cnt>d)
                    d=cnt;
                    cnt=1;
                }
            }
        }
      cout<<ma+d<<el;
    }
}


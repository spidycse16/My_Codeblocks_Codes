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
        cin>>x>>k;
        if(x%k!=0)
        {
            cout<<"1"<<el;
            cout<<x<<el;
        }
        else
        {
            for(i=x-1 ; ; i--)
            {
                m=i;
                d=1;
                if(m%k!=0 && d%k!=0)
                {
                    cout<<2<<el;
                    cout<<m<<" "<<d<<el;
                    break;
                }
                d++;
            }
        }
    }
}

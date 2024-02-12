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
        cin>>n>>m>>k;
        ma=(n/k);
        if(m>=ma)
            ma=ma;
        else
            ma=m;
        m=m-ma;
        k--;
        if(m%k==0)
            cnt=(m/k);
        else
        {
            cnt=(m/k);
            cnt++;
        }
        cout<<ma-cnt<<el;
    }
}


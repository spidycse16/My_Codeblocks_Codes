#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,x,y,n,i,j,k,d,m,h,z,cnt,ans,res,flag,ma;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
map<ll,ll> mp;
set <ll> st;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        flag=0;
        vector <ll> v;
        vector <ll> v1;
        cin>>n;
        for(i=0  ; i<n ; i++)
        {
            cin>>x;
            v.pb(x);
            v1.pb(x);
        }
        sort(v1.begin(),v1.end());
        for(i=0 ; i<vlen ; i++)
        {
            if((v[i]%2)==0 && v1[i]%2==1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<el;
        else
            cout<<"YES"<<el;
    }
}


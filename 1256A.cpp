#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,x,y,a,b,n,i,j,k,d,m,z,cnt,ans,res,flag,ma;
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
        cin>>a>>b>>n>>x;
        if(x>((a*n)+b))
            cout<<"NO"<<el;
        else
        {
            m=x/n;
            d=(m*n)+b;
            if(x<=d)
                cout<<"YES"<<el;
            else
                cout<<"NO"<<el;
        }
    }
}



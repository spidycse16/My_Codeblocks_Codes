#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt=0,ans,res,flag,ma;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
map<ll,ll> mp;
set <ll> st;

ll name(ll i,ll n)
{
    if(i>n)
        return 0;
    else
    {
        cout<<i<<el;
        name(++i,n);
    }
}


int main()
{
    cin>>n;
    name(1,n);
}



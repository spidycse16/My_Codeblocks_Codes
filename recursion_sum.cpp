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
int sum(ll n)
{
    ll su=0;
    if(n==0)
        return 0;
    else
    {
    return n+sum(n-1);
    }
}


int main()
{
  cin>>n;
  cout<<sum(n)<<el;
}

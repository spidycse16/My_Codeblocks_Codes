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

ll name()
{
    cnt++;
    if(cnt==6)
        return 0;
    else
    {
        cout<<"Sagor"<<el;
        name();
    }
}


int main()
{
  name();
}


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
        cin>>s;
        if(slen%2==1)
            cout<<"NO"<<el;
        else if(s[0]==')')
            cout<<"NO"<<el;
        else if(s[slen-1]=='(')
                    cout<<"NO"<<el;
        else
            cout<<"YES"<<el;
    }
}

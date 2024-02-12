
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
map<ll,ll> mp;
set <ll> st;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        cin>>n;
        ll temp=1,ma=0,mi=n;
        cin>>s;
        for(i=0 ; i<slen-1 ; i++)
        {
            if(s[i]!=s[i+1])
            {
                if(temp>ma)
                    ma=temp;
                temp=1;
            }
            else
                temp++;
        }
        if(temp>ma)
            ma=temp;
        cout<<ma+1<<el;
    }
}

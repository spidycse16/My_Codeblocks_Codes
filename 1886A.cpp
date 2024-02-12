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
        cin>>n;
        flag=0;
        n=n-1;
        x=n-2;
        y=2;
        while(y<x)
        {
            if(x%3!=0 && y%3!=0)
            {
                flag=1;
                break;
            }
                x--;
                y++;
        }

    if(flag==0)
    cout<<"NO"<<el;
    else
    {
        cout<<"YES"<<el;

        cout<<"1 "<<x<<" "<<y<<el;
    }
    }
}

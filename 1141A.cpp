#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,x,y,a,b,n,i,j,k,d,m,z,cnt=0,ans,res,flag,ma;
char ch;
string s,str;
vector <ll> v;
map<ll,ll> mp;
set <ll> st;
int main()
{

    cin>>x>>y;
    cnt = 0,flag=0;
    if(y%x!=0)
        flag=1;
    else
    {
        y=y/x;
        for(i=0 ; ; i++)
        {
            if(y<=1)
                break;
            if(y%2==0)
            {
                y=y/2;
                cnt++;
            }
            else if(y%3==0)
            {
                y=y/3;
                cnt++;
            }
            else
            {
                flag=1;
                break;
            }
        }
    }
        if(flag==-0)
            cout<<cnt<<el;
        else
            cout<<"-1"<<el;
}



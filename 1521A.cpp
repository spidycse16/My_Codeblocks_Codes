#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define ma 0
#define slen s.size()
#define vlen v.size()
#define el endl
ll a,b,tc,x,y,n,i,j,k,d,m,z,cnt,ans,res,flag;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        cin>>x>>y;
        if(y==1)
            cout<<"NO"<<el;
        else
        {
            cout<<"YES"<<el;
            cout<<x*y<<" "<<x<<" "<<x+(x*y)<<el;
        }
    }
}

